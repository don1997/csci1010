//HEADER
//NAME: Donald McLaughlin
//COURSE NUMBER: CSCI 1011-001
//ASSIGNMENT: Week 10 Question 1
//SUMMARY: A scientific calculator that can find the square root and square of any integer.
#include<iostream>
#include<cmath> //math library for pow() and sqrt()

using namespace std;

//Displays menu for calculator.
void displayMenu(void)
{
cout << "**** Scientific Calculator ****" << endl;
cout << "1. Squared" << endl;
cout << "2. Square root" << endl;
cout << "3. Exit" << endl;
}//ENDFUNC



int main(void)
{
    //VAR
    int input, inNum, result;



    do {

        displayMenu();
        cin >> input;
        
         
        if(input == 1){
            
            cout << "Enter a number: ";
            cin >> inNum;
        
            result = pow(inNum, 2); 
            cout << inNum << "^2 is : " << result << endl;
    
        }else if(input == 2){
                
            cout << "Enter a number: ";
            cin >> inNum;
        
            result = sqrt(inNum);
            cout << "Sqrt of " << inNum << " is: " << result << endl;

        }
    }while(input != 3);

    cout <<"@@@Thank you! See you next time.@@@" << endl;

 





return 0;
}
