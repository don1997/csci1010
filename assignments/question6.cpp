#include<iostream>

using namespace std;

int main(void)
{

    //CONST
    const int quarter = 25, dime = 10, nickle = 5;

    //VAR
    int total, numOfQuarter, numOfDime, numOfNickle;

    cout << "Number of quarters: ";
    cin >> numOfQuarter;
    cout << "Number of dimes: ";
    cin >> numOfDime;
    cout << "NUmber of nickles: ";
    cin >> numOfNickle;
    
    //CALC
    total = (numOfQuarter * quarter) + (numOfDime * dime) + (numOfNickle * nickle);
    
    cout << "There are " << total << " cents in total." << endl;
return 0;
}
