#include <iostream>
#include<time.h>
using namespace std;
int roll_die() {   //function that generates a random number from 1 to 6
    int value = 1+ rand()%6;  //generate random number
    return value;       //return value
    }

int main()
{
        std::string input;   //declare variable
        srand(time(0));     //time variable
        //testing the function
        //for(int i=0;i<10;i++)
            std::cout<<roll_die()<<" ";
        //main program
        while(1) {  //run a loop
        std::cout<<"Enter Y to roll the die, type something other to stop: ";
        std::cin>>input;     //take input from user
        if (input=="Y") {   //if user input Y then call the roll_die function
            std::cout<<"Result = "<<roll_die()<<"\n";    //print output
            }
            else {
                exit(0);    //exit the program
            }
        }
        return 0;
}