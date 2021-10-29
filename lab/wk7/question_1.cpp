//HEADER START
//NAME: Donald McLaughlin
//COURSE NUMBER: CSCI 1011-001 
//ASSIGNMENT NUMBER: Week 7 Lab Question 1
//SUMMARY: Give three input values and checks to see if it is a triangle.
//HEADER END


#include<iostream>

using namespace std;


int main(void)
{

    //CONST

    const int TRISUM = 180;
    
    //VAR
    int angleA, angleB, angleC,  angleSum;

    //INPUT 
    cout <<"Please enter the value for three angles: ";
    cin >> angleA, angleB, angleC;
    
    //angleSum CALC
    angleSum = angleA + angleB + angleC; 

    if(angleSum <= TRISUM){
        
        cout << "It is a Triangle!!" << endl;
    }     

    else{
    
        cout <<" It is not a Triangle!!" << endl;



    }







return 0;
}
