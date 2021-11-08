//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010
//ASSIGNMENT: Assignment 5 Question 3
//SUMMARY: Calculates pi using Lebnitz sequence up to 99th iteration
#include<iostream>
#include<cmath> //For fmod()
using namespace std;

int main(void)
{
    //VAR
    long double  x, y, pi;
    pi = 1.0;
    
    //up to 99th iteration
    for(x = 0; x < 99.0; x++){
        //denominator
        y = x * 2.0  + 3.0;
        //if even
        if(fmod(x,2.0) == 0){

            pi -= (1.0/y);
        }else{

            pi += (1.0/y);

        }

    }//ENDFOR
    pi *= 4; 
    //DISPLAY
    cout <<"The value of PI is: "  << pi << endl;




return 0;
}
