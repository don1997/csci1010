//HEADER
//NAME: Donald McLaughlin 
//COURSE: CSCI 1010
//ASSIGNMENT: Assignment 4 Question 3
//SUMMARY: Takes an income and determines tax rate.
#include<iostream>

using namespace std;

int main(void)
{

    //VAR

    double income, txDue, amtOver;
    //INPUT
    cout << "Enter the income: ";
    cin >> income;

    //CALC
    if(income > 5250){
    
    amtOver = income - 5250;
    txDue = (142.5) + (amtOver * .05);
    
    }else if(income >= 3750){

    amtOver = income - 3750;
    txDue = (82.5) + (amtOver * .04); 

    }else if(income >= 2250){

    amtOver = income - 2250;
    txDue = (37.5) + (amtOver * .03);
    
    }else if(income >= 750){
    
    amtOver = income - 750;
    txDue = (7.5) + (amtOver * .02);

    }else{
    txDue = income * .01;
    }
    
    //OUTPUT
    cout <<"The tax due is: $" << txDue << endl;



return 0;
}
