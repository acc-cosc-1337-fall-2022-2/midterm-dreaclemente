#include "question3.h"
#include <iostream>
#include <assert.h>
using namespace std;

//function definition to swap the reference
void swapByRef(int &x, int &y) {
    int temp;
    temp = x; //save the value at address x
    x = y;      //put y into x
    y = temp; //put x into y

    return;
}

//function definition to swap the values
void swapbyValue(int x, int y) {
    int temp;

    temp = x; //save the value of x
    x = y;    //put y into x
    y = temp; //put x into y

    return;
}