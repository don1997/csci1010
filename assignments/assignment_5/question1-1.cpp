//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010
//ASSIGNMENT: Assignment 5 Question 1
//SUMMARY: Takes integer and adds up all of the evens

#include<iostream>

using namespace std;

int main(void)
{

    //VAR
    int sum, IN, x;
    sum = 0; 
   
    cout << "Enter numbers, end by 0: ";

    while(IN != 0){
    
        cin >> IN;
        x = IN;
        
        //IF x is even
        if(x % 2 == 0){
         
            sum += x;
        
        }
        //IF x is odd
        else{
            
            x = 0;
        
        }
    }

    //DISPLAY sum
    cout << "The sum of the even integers is : " << sum;

return 0;
}
