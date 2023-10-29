#include <iostream>

int main()
{

    int x, y;
    std::cin >> x >> y;
    if (x > 0)
    {
        if (y > 0)
        {
            std::cout << "1st";
            return 0;
        }
        else if (y < 0)
        {
            std::cout << "4th";
            return 0;
        }
        else
        {
            std::cout << "Can not be determined";
            return 0;
        }
    }
    else if (x < 0)
    {
        if (y > 0)
        {
            std::cout << "2nd";
            return 0;
        }
        else if (y < 0)
        {
            std::cout << "3rd";
            return 0;
        }
         else
        {
            std::cout << "Can not be determined";
            return 0;
        }
    }
    else
    {
        std::cout << "Can not be determined";
        return 0;
    }
}