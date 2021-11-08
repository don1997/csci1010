#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{   
    //CONST 
    const double kmConvert = 1.609344;
    //VAR
    double miles, kilometers; 
    
    cout << "Please enter the number of miles: ";
    cin >> miles;

    //Calculate
    kilometers = miles * kmConvert;    


    cout << "The equivalent distance in kilometeres is: " << setprecision(1) << fixed << kilometers << " kilometers." << endl;

return 0;
}
