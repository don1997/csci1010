//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010
//ASSIGNMENT: Assignment 3 Question 2
//SUMMARY: Takes a two digit number and reverses it by converting into a string and reversing it in string format and converting it back into integer.

#include<iostream>
#include <string>
#include <typeinfo>    //used for checking data type of variable. 
using namespace std;

int main(void)
{

    //VAR
    int twoDigitNum;
    string strOld, strNew;
    string dataType;

    //USER INPUT
    cout <<"Enter a two digit number: ";
    cin >> twoDigitNum;
    
    //Convert INT to STRING 
    strOld = to_string(twoDigitNum);
   
    //String Reversal START
    for(int i = strOld.size() - 1; i >=0; --i){
        strNew += strOld[i];
    }
    //String Reversal END
    
    //Converts STRING back to INT
    int intConvert = stoi(strNew);
    
    //Display
    cout << "The reversed number is: " << intConvert << endl << endl;;
    
    //Check data type of intConvert to make sure it is INTEGER.
    dataType = typeid(intConvert).name();
    
    //If VAR is int the it is an integer.
    if (dataType == "i"){
        dataType = "Integer";
    }
    //else something else
    else {
        cout <<"The variable uses a data type other than integer" << endl << endl;
    }
    
    //DISPLAY data type
    cout << "The data type that the variable uses is an: " << dataType << endl << endl;
    
    return 0;
}
