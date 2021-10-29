#include<iostream>
#define ON 1
#define OFF 0
using namespace std;

int main(void)
{

    //CONST
    //VAR
    double total,discount; 
    //USER INPUT
    cout << "Enter user total: "; 
    cin >> total; 
    //CALC
    if(total < 500){
        discount = 0.25;
    }
    else{
        discount = 0.15;
    }

    
return 0;
}
