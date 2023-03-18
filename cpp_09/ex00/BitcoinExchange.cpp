//
// Created by Spider Chung on 3/17/23.
//

#include "BitcoinExchange.hpp"

std::map<std::string, double> readData() {
    std::map<std::string, double> _data;
    std::ifstream file("data.csv");
    std::string line;
    getline(file, line);
    while(std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, rate;
        std::getline(ss, date, ',');
        std::getline(ss, rate, ',');
        _data[date] = std::stod(rate);
    }
    return _data;
}

void printMap(const std::map<std::string, double>& myMap) {
    std::map<std::string, double>::const_iterator it;
    for (it=myMap.begin(); it!=myMap.end(); it++)
        std::cout << it->first << ' ' << it->second << std::endl;
}

void checkInput(char *file, std::map<std::string, double> data) {
    std::ifstream inputFile(file);
    if (!inputFile) {
        std::cerr << "Error: Failed to open file." << std::endl;
        exit(1);
    }
    std::string firstLine;
    std::getline(inputFile, firstLine);
    if(firstLine.compare("date | value")) {
        std::cerr << "Error: First line of file is not \"date | value\"." << std::endl;
        exit(1);
    }
    std::string line;
    while (std::getline(inputFile, line)) {
        std::stringstream iss(line);
        std::string date;
        std::string value;
        char separator;
        if (!(iss >> date >> separator >> value) || separator != '|')
            std::cout << "Error: bad input => " << date << std::endl;
        else if (!ifValidDate(date) || !ifValidValue(value))
            std::cout << "Error: bad input => " << date << std::endl;
        else if (stod(value) < 0)
            std::cout << "Error: not a positive number." << std::endl;
        else if (stod(value) > 1000)
            std::cout << "Error: too large a number." << std::endl;
        else if (stod(value) < 1000 || stod(value) > 0) {
            double mult = stod(value) * findRate(date, data);
            std::cout << date << " => " << value << " = " << mult << std::endl;
        }
        else
            std::cout << "Error: bad input => " << date << std::endl;
    }
    inputFile.close();
}

bool ifValidDate(const std::string& date) {
    if (date.length() != 10)
        return false;
    int year, month, day;
    char sep1, sep2;
    std::istringstream ss(date);
    ss >> year >> sep1 >> month >> sep2 >> day;
    if (ss.fail() || sep1 != '-' || sep2 != '-' || year < 0
        || month < 1 || month > 12 || day < 1 || day > 31)
        return false;
    bool leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    if ((month == 2 && (leap_year ? day < 29 : day > 28))
        || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30))
        return false;
    return true;
}

bool ifValidValue(const std::string& value) {
    try {
        std::stof(value);
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    return true;
}

double findRate(std::string date, std::map<std::string, double> data) {
    std::map<std::string, double>::iterator it = data.find(date);
    if (it != data.end()) {
        return it->second;
    } else {
        std::string previousDay = moveDateBackOneDay(date);
        if (!previousDay.compare("not valid date"))
            return 0;
        return findRate(previousDay, data);
    }
}

std::string moveDateBackOneDay(const std::string& date) {
    int year, month, day;
    sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
    int prev_day = day - 1;
    int prev_month = month;
    int prev_year = year;
    if (prev_day == 0) {
        prev_month = month - 1;
        if (prev_month == 0) {
            prev_month = 12;
            prev_year = year - 1;
            if (prev_year < 2009)
                return "not valid date";
        }
        switch (prev_month) {
            case 2:
                if (prev_year % 4 == 0 && (prev_year % 100 != 0 || prev_year % 400 == 0)) {
                    prev_day = 29;
                } else {
                    prev_day = 28;
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                prev_day = 30;
                break;
            default:
                prev_day = 31;
        }
    }
    std::string prev_date = std::to_string(prev_year) + "-";
    if (prev_month < 10)
        prev_date += "0" + std::to_string(prev_month);
    else
        prev_date += std::to_string(prev_month);
    if (prev_day < 10)
        prev_date += "-0" + std::to_string(prev_day);
    else
        prev_date += "-" + std::to_string(prev_day);
    return prev_date;
}
