#include <iostream>

int main()
{
    int year, month, day, hours, mins, secs;
    std::cin >> year;
    month = year * 12;
    day = year * 365;
    hours = day * 24;
    mins = hours * 60;
    secs = mins * 60;

    std::cout 
    << "Months old: " << month << '\n'
    << "Days old: " << day << '\n'
    << "Hours old: " << hours << '\n'
    << "Minutes old: " << mins << '\n'
    << "Secs old: " << secs 
    << std::endl;

    return 0;
}