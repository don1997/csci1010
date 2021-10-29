#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{

    //CONST
    
    //VAR
    float temp, velocity, windChill;
    //USER
    
    cout << "Please enter a number for temperature: ";
    cin >> temp;
    cout << "Please enter a number for velocity: ";
    cin >> velocity;
    //CALC 
    
    windChill = 35.74 + 0.6215 * temp + (0.4275 * temp - 35.75) * pow(velocity, 0.16);

    cout <<"The windchill is: " << windChill;

return 0;
}
