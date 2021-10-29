//HEADER START
//NAME: Donald McLaughlin
//COURSE: CSCI1011-001 
//ASSIGNMENT: Week 7 Lab question 2
//SUMMARY: Given an input, this program checks to see how many digits the input has up to 4 digits.
//
//HEADER END


#include<iostream>

using namespace std;

int main(void)
{

    //VAR
    int digitIn, i;
    //INPUT
    cout << "Enter a number, no more than 4 digits: ";
    cin >> digitIn;


    //HowManyDigits?
   
    if(digitIn <= 9){
    
        cout << "One digit\n";
    
    } 
    
    else if(digitIn <= 99){

        cout << "Two digits\n";
    } 

    else if(digitIn <= 999){
            
        cout << "Three digits\n";

    } 

    else if(digitIn <= 9999){

        cout << "Four digits\n";

    }

return 0;
}
