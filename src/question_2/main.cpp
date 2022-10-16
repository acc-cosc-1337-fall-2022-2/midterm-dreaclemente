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
int main()
{
    int cookies;
    vector<float> resultvector;
    cout<<"Enter the number of cookies."<<endl;
    if(cookies<=0){//if cookies is less than zero
        cout<<"Cookies must be greater than 0. Please try again."<<endl;
        return 0;
    }
    cin>>cookies;
    resultvector=get_cookie(cookies);
    //print result
    cout<<"Cup of sugar "<<resultvector[0]<<endl;
    cout<<"Cup of butter "<<resultvector[1]<<endl;
    cout<<"Cup of flour "<<resultvector[2]<<endl;
    return 0;
}