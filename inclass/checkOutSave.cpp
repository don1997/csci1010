#include<iostream>

using namespace std;

int main(void)
{

    //VAR
    double amount, amounta;

    //USER INPUT
    cout <<"Enter amount: $";
    cin >> amount;

    //CALC START

    if (amount >= 100){

        amounta = amount - 30;
    }
    else if (amount >= 75){
    
        amounta = amount - 20;
    }
    else if (amount >= 50){

        amounta = amount - 10;

    }
    else{
        amounta = amount;
        cout <<"No discount applied" << endl;
    }
   //CALC END
    
   //DISPLAY OUTPUT
   cout << "The amount after discount is: $" << amounta << endl; 
 






return 0;
}
