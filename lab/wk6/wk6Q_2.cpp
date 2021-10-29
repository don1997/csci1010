#include<iostream>

using namespace std;

int main(void)
{

    //CONST 

    //VAR
    int userAmount,oneBill, fiveBill, tenBill, twentyBill;
    
    cout << "Enter a number of U.S. dollars: ";
    cin >> userAmount;
    
    //CALC
    twentyBill =  userAmount / 20;
    
    tenBill = (userAmount%20)/10;
    
    fiveBill = (userAmount%10)/5;
    
    oneBill = (userAmount%5) / 1;
    
    //DISPLAY
    cout << "number of 20 bills: " << twentyBill << endl;
    cout << "number of 10 bills: " << tenBill << endl;
    cout << "number of 5 bills: " << fiveBill << endl;
    cout << "number of 1 bills: " << oneBill << endl;
return 0;
}
