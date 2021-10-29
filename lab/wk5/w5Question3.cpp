#include<iostream>

using namespace std;

int main()
{
//CONST Declaration
const double payRate = 16.78, ssTax = .06, fedTax = .14, statTax = .05;
//VAR Declaration
int hoursWorked, overTimeRemain;
double grossPay, ovdrTimeCalc;

//Display OUTPUT and INPUT
    cout << "Enter the work hours: ";
    cin >> hoursWorked;
//FLOW CONTROL
    if (hoursWorked > 40){
       overTimeRemain =  hoursWorked - 40;
       overTimeCalc   =  1.5 * overTimeRemain 
    }

    grossPay = (payRate * hoursWorked) + 
return 0;
}
