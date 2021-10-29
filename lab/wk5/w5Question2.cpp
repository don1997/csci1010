#include<iostream>
using namespace std;
#include <iomanip>

int main()
{   //VAR Declaration
    double cheeseburgerPrice = 5.89, espressoPrice = 3.99, totalPrice;
    int numOfCheeseburger, numOfEspresso;
    
    //Display OUTPUT and INPUT
    cout << "How many cheeseburgers: ";
    cin >> numOfCheeseburger;
    cout << "How many espressos: ";
    cin >> numOfEspresso;
    
    //Calculations
    totalPrice = (.07 *(cheeseburgerPrice * numOfCheeseburger)
     + (numOfEspresso * espressoPrice)) + numofCheesburger * cheesburgerPrice + numOfEspresso * espressoPrice;
    
    //Display Final Output 
    cout << "The total for our royal customer is: $" << setprecision(2)
    << fixed << totalPrice << endl; 
    
    
return 0;
}
