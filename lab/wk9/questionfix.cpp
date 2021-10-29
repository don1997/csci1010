//HEADER
//
//
//
//
//
//
#include<iostream>

using namespace std;

int main(void)
{

    //VAR
    double intDue, totDue, minPay, accBal;
        
    cout << "Please enter the acoount balance: ";
    cin >> accBal;

        //CALC for interest and total due.

    if(accBal == 1000){
        
        intDue = accBal * .015;
        totDue = intDue + accBal;

    }else if(accBal > 1000){

        intDue = (accBal * .015) * (.01);
        totDue = intDue + accBal;
            
    }  


    //CALC for mininum pay.
    if(totDue <= 10){
    
        cout << "The minimum payment is $" << totDue << endl;
    
    }else if(totDue >= 10){

        minPay = totDue * .1;
        
        cout << "The minimum payment is $" << minPay << endl;

    }       








return 0;
}
