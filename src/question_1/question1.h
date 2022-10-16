#include <iostream>
#include<time.h>
int roll_die() {   //function that generates a random number from 1 to 6
    int value = 1+ rand()%6;  //generate random number
    return value;       //return value
    }
