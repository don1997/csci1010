//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010
//ASSIGNMENT: ASSIGNMENT 3 Question 4
//SUMMARY: Takes three numbers and performs calculation. 
//

#include<iostream>
#include<cmath>

#define GRAVITY 9.80665

using namespace std;

int main(void)
{
    
    //VAR
    double  y, x, v, t; 
    
    //User INPUT

    cout <<"Enter three values: ";
    cin >> x >> v >> t;
    
    //CALC START
    
    y = x + v * t - ((GRAVITY * pow(t,2)) / 2);
    
    //CALC END

    //DISPLAY OUTPUT

    cout << "The answer is: " << y << endl;
return 0;
}
