#include <ctime>
#include <iostream>
#include <iomanip>
//
//void past_timestamp(struct tm *ptr)
//{
//    std::cout << "[" << std::setfill('0')
//                << ptr->tm_year + 1900
//                << std::setw(2) << ptr->tm_mon
//                << std::setw(2) << ptr->tm_mday << "_"
//                << std::setw(2) << ptr->tm_hour
//                << std::setw(2) << ptr->tm_min
//                << std::setw(2) << ptr->tm_sec << "]";
//}
//
//int main()
//{
//    time_t now;
//    struct tm *ptr;
//
//    time(&now);
//    ptr = localtime(&now);
////    std::time_t result = std::time(nullptr);
////    std::cout << std::asctime(std::localtime(&result))
////              << result << "sdf " << (ptr->tm_year + 1900) << " seconds since the Epoch\n";
//    past_timestamp(ptr);
//}
//
