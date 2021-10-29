//HEADER
//NAME: Donald McLaughlin
//COURSE NUMBER: CSCI 1011-001
//ASSIGNMENT NUMBER: Week 9 Question 3
//SUMMARY: Takes 3 numbers and determines which one is the smallest.
//
#include<iostream>

using namespace std;

int main(void)
{

    //VAR

    int a, b, c;

    //INPUT
    cout << "Please enter three numbers: ";
    cin >> a >> b >> c;

    //IF
    if( a < c && a < b){

        cout << a << " is the smallest number." << endl;

    }else if( b < a && a < c){

        cout << b << " is the smallest number." << endl;
    
    }else if( c < b && c < a){

       cout << c << " is the smallest number." << endl;
    
    }
    
    //ENDIF

return 0;
}
