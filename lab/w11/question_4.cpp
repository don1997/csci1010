//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1011-011
//ASSIGNMENT: Lab 11 Question 4
//SUMMARY: Finds the even squares between 1 and the inputted integer.
#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    //VAR    
    int i, IN, ANS;
    
    ANS = 0; 
    //INPUT
    cout << "Enter Number: ";
    cin >> IN;
    
    for(i = 1; i <= IN; i++){
            
        //IF even and output is less than input keep getting power.
         if(i % 2 == 0 && ANS < IN) {
            ANS = pow(i,2);
            cout << ANS <<" "; 
         }
   }




return 0;
}
