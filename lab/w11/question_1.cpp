//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1011-001
//ASSIGNMENT: Lab 11 Question 1
//SUMMARY: Calulates the smallest number out of 10 inputs.
#include<iostream>

using namespace std;

int main(void)
{

    //var
    int i, n, nums, smallest;
    
    //determine smallest 
    for(i = 0; i < 10; i++){
        cout <<"Enter 10 numbers ";
        cin >> nums;
        if (i == 1){
            smallest = nums;

        }
        else{
            
            if(nums < smallest){
    
                smallest = nums;
        
            }


        }
    
    }//ENDFOR

    //DISPLAY
    cout <<"The smallest number is: " << smallest << endl;



return 0;
}
