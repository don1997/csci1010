//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010 
//ASSIGNMENT: Question 3 Assignment 6
//SUMMARY: Out of a range of numbers up to 10000. Checks to see if number is odd, the sum of the digits is 27, and the digit in the thousands place is three times the digit in the tens place.
//
#include<iostream>

using namespace std;

//Gets the sum of the integer.
int getIntSum(int a){

    int s = 0;

    while (a != 0) {
        s = s + a % 10;
        a = a / 10;

    }
    return s;
}


//Checks to see if integer is odd
int isOdd(int b){
    bool t;
        
    if (b % 2 != 0){
        
        t = true;        

    }
    return t;
}


// checks the tens and thousands place of integer.
int numbersPlace(int b){
    
    int t, tens, thousands;
    
    tens = (b % 100) / 10;
    thousands = (b / 1000);
    
    if(tens * 3 == thousands){

        t = true;

    }
        
    return t;

}


//MAIN FUNCTION START
int main(void)
{


    //VAR
    int i;

    for(i = 0; i < 10000; i++){

        if(isOdd(i) == 1 && getIntSum(i) == 27 && numbersPlace(i) == 1){    

            cout << i << endl;
        }

    }

return 0;
}
//MAIN FUNCTION END

