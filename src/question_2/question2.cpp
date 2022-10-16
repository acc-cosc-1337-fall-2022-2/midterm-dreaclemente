#include "question2.h"
#include <iostream>
#include <vector>
using namespace std;
vector<float> get_cookie(int number)
{
    float sugar;
    float butter;
    float flour;
    sugar=number*(1.5/48); // give for 48 cookies 1.5 cup is desired
    //for number of cookies is number*(1/5/48)
    // cup desired
    butter=number*(1.0/48); //give for 48 cookies 1.0 cup is desired
    //for number of cookies is number*(1.0/48)
    // cup desired
    flour=number*(2.75/48); //give for 48 cookies 2.75 cup is desired
    //for number of cookies is number*(2.75/48)
    //cup desired
    vector<float> result;
    result.push_back(sugar); //enter result in result vector
    result.push_back(butter); //enter result in result vector
    result.push_back(flour); //enter result in result vector
    return result; //result result
}