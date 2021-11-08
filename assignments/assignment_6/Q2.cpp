//HEADER
//NAME: Donald McLaughlin
//CLASS: CSCI 1010
//ASSIGNEMNT: Question 2 Assignment 6
//SUMMARY: Input number and find how many numbers are greater than 60.
//

#include<iostream> 

using namespace std;


int main(void)
{
    //VAR
    int i, IN, numOfNums;
    int j = 0;
    
    //Loops user input and finds numbers greater than 60.
    for(i = 0; i < 10; i++){
        
        cout << "Enter number: ";
        cin >> IN;        
        
        if (IN > 60){

            j++;
        }
    }    
        
    cout << "There are " << j <<" numbers greater than 60." << endl;









return 0;
}
