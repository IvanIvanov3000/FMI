#include <iostream>
#include <string>

int main()
{
    std::cout << "Type your name: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Current name:" + name;
    return 0;
}