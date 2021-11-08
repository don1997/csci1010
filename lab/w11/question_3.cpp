//HEADER
//NAME: Donald McLaughlin
//COURSE NUMBER: CSCI 1011-001
//ASSIGNMENT: LAB 11 Question 3
//SUMMARY: Finds the decimal value of a binary number.
#include<iostream>
#include<cmath>
using namespace std; 

int main(void)
{
    
    //VAR
    int decimalVal, i, rem, num;
    //
    cout << "Enter a binary number: ";
    cin >> num;

   decimalVal = 0;
   i = 0;

   //converting binary to decimal
   while (num != 0)
   {
      rem = num % 10;
      num /= 10;
      decimalVal += rem * pow(2, i);
      i++;
   }

   cout << "The Decimal value is: " << decimalVal << endl;





return 0;
}
