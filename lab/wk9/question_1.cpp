//HEADER
//NAME: Donald McLaughlin
//COURSE NUMBER: CSCI 1011-001
//ASSIGNMENT: Week 9 Question 1
//SUMMARY: Takes account balance and finds interest rates.
//
//
#include<iostream>
#include<iomanip>       //Allows for commands setprecision() and fixed for decimal places.

using namespace std;

int main(void)
{

    //VAR
    double intDue, totDue, minPay, accBal, amtOver, amtOverInt;
    //INPUT    
    cout << "Please enter the acoount balance: $";
    cin >> accBal;

    //CALC for interest and total due.



    if(accBal >= 1000){
        
        amtOver = accBal - 1000;
        amtOverInt = amtOver * .01;
        intDue = (1000 * .015) + (amtOverInt);
        totDue = intDue + accBal;

 
    }else if(accBal < 1000){

        intDue = 0;
        totDue = intDue + accBal;
    }
        


    //DISPLAY tot amt and interest

    cout << "The interest due: $" << intDue << setprecision(2) << fixed << endl;
    cout << "The total amount due is: $" << totDue << setprecision(2) << fixed << endl;

    //DISPLAY END


    //CALC for mininum pay.
    if(totDue <= 10){
    
        cout << "The minimum payment is $" << setprecision(2) << fixed << totDue << endl;
    
    }else if(totDue >= 10){

        minPay = totDue * .1;
        
        cout << "The minimum payment is $" << setprecision(2) << fixed << minPay << endl;

    }
     








return 0;
}
