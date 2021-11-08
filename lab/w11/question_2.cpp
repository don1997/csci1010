//HEADER
//NAME: Donald McLaughlin
//COURSE NUMBER: CSCI 1011-001
//ASSIGNMENT: Lab 11 question 2
//SUMMARY: Calculates the number of digits in a given integer.

#include<iostream>

using namespace std;

int main(void)
{

    //VAR
    int IN, numOfDigits,i;
    
    numOfDigits = 0;
    
    cout <<"Enter an integer: ";
    cin >> IN;
    

    //CALC
    for(i = 1; IN != 0; i++){
    
        IN /= 10;
        numOfDigits = i;
    }

    
    //DISPLAY
    cout <<"The number of digits is: " << numOfDigits;




return 0;
}
