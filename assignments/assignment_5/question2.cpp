//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010
//ASSIGNMENT: Assignment 5 Question 2
//SUMMARY: Takes an integer performs the Hailstone sequence
//
//



#include<iostream>

using namespace std;

int main(void)
{
    //VAR
    int n;
    //INPUT
    cout << "Enter a positive integer: ";
    cin >> n;
    
        
   while(n != 1){
        //if even 
        if(n % 2 == 0){
        
            n /= 2;

        }
        //if odd
        else{
        
            n = 3 * n + 1;


    }
    //display number
    cout << n << " ";
    }//endwhile



return 0;
}
