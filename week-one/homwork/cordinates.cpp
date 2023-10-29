#include <iostream>

int main(){

    int x,y;

    if(x > 0){
        if(y> 0){
            std::cout << "1st";
            return;
        }
        else if(y<0){
            std::cout << "4th";
            return;

        }
    }else if(x < 0){
        if(y> 0){
            std::cout << "2nd";
            return;
        }
        else if(y<0){
            std::cout << "3rd";
            return;

        }
    }
}