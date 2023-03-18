//
// Created by Spider Chung on 3/17/23.
//

#include <iostream>
#include <map>
#include <exception>
#include <string>
#include <fstream>
#include <sstream>
#include <iterator>

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

std::map<std::string, double> readData();
double findRate(std::string date, std::map<std::string, double> data);
void checkInput(char *file, std::map<std::string, double> data);
void printMap(const std::map<std::string, double>& myMap);
std::string moveDateBackOneDay(const std::string& date);
bool ifValidDate(const std::string& date);
bool ifValidValue(const std::string& value);


#endif //BITCOINEXCHANGE_HPP
