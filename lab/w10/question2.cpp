//HEADER
//NAME: Donald McLaughlin
//COURSE NUMBER: CSCI 1011-001
//ASSIGNMENT: Week 10 question 2
//SUMMARY: Finds the GCD of two integers.
//
#include<iostream>


using namespace std;




int main(void)
{

    //VAR
    int a , b;
    //DISPLAY
    cout << "Enter the values of a and b: " << endl;
    cin >> a >> b;
    
    //CALC
    while (a != b){
    
        if(a > b){
            a = a - b;
        }else{
    
            b = b - a;
        }
    
    //ENDCALC

    }//ENDWHILE
    
    //DISPLAY RESULT
    cout << "The GCD is: " << a;
   
return 0;
}
