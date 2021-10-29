#include<iostream>
#include<iomanip> 

using namespace std;

int main()
{   
    //VAR Declaration
    float bill, tipPercent, tipadder, result;
    int people;

    cout << "How much was the bill? $";
    cin >> bill;

    cout << "How many in your party?" << endl;
    cin >> people;

    cout << "Tip percent: ";
    cin >> tipPercent;

    //Calculations START
    tipadder = bill*tipPercent;

    result = (tipadder + bill ) / people;
    //Calculation END
    cout << "You each must pay: $ " << setprecision(2) << fixed << result << endl;
    

return 0;
}
