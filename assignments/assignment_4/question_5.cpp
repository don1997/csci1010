//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010
//ASSIGNMENT: Assignment 4 Question 5
//SUMMARY: Takes grade and outputs message.
//
#include<iostream>

using namespace std;

int main(void)
{
    //VAR
    char grade;
    //INPUT
    cout << "Enter a grade: ";
    cin >> grade;

    switch(grade){

    case 'A':
        cout << "Excellent" << endl;
    break; 
    
    case 'B':
        cout << "Good" << endl;
    break; 
    case 'C':
        cout << "Average" << endl;
    break; 
    case 'D':
        cout << "Poor" << endl;                                              
    break; 
    case 'F':
        cout << "Failing" << endl;                                              
    break; 
    default:
        cout <<"Enter proper character" << endl;
    break;
    }



return 0;
}
