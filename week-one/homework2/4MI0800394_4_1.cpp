#include <iostream>
#include <string>

int main()
{

    std::string words[5] = {};
    double hours, count;
    count = 0;
    std::cin >> hours;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> words[i];
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << words[i][1];
        for (int y = 0; y < 13; y += 2)
        {
            if (words[i][y] == 'h' && words[i][y + 1] == 'w')
            {
                count++;
            }
             if (words[i][y] == 's' && words[i][y + 1] == 't')
            {
                count+= 0.5;
            }
        }

       
    }
     if (hours > count)
        {
            std::cout << "You should work more";
        }else{
            std::cout << "You got it!";
        }
}