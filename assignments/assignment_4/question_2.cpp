//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010
//ASSIGNMENT 4 Question 2 
//SUMMARY: Takes two integers and determines whether the numbers are greater, less than or equal too.
#include<iostream> 

using namespace std;

int main(void)
{

    //VAR
    int in1, in2;
    //INPUT
    cout <<"Please enter two integers: ";
    cin >> in1 >> in2;

    //Greater than
    if(in1 > in2){
        
        cout << in1 << " is greater than " << in2 << endl;
    //Less than
    }else if(in1 < in2){
    
        cout << in1 << " is less than " << in2 << endl;
    //Equal To
    }else if(in1 == in2){
        cout << in1 << " and " << in2 << " are equal." << endl;

    }
    else {

        cout <<"Please enter valid input." << endl;
    }
    

return 0;
}
