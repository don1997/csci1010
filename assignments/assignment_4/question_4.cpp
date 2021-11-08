//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010
//ASSIGNMENT: Assignment 4 Question 4
//SUMMARY: Takes a year and determines if it a leap year or common year.
#include<iostream>

using namespace std;

int main(void)
{

    //VAR

    int year;
    //INPUT
    cout << "Enter a year: ";
    cin >> year;
    //IF not divisble by 4
    if(year % 4 != 0){

        cout << "It is a common year." << endl;
    //IF not divisble by 100
    }else if(year % 100 != 0 ){

        cout << "It is a leap year." << endl;
    //IF not divisible by 400
    }else if(year % 400 != 0){

        cout << "It is a common year." << endl;
    
    }else {

        cout << "It is a leap year." << endl;

    }

return 0;
}
