//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010
//ASSIGNMENT: Assignment 3 Question 3
//SUMMARY: Takes user input such as price total, tip percent, and number of people and then performs calculation to find out how much each person will pay with tip. 

#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{

    //VAR

    double bill, tipPercent, tipAdder, result;
    int people;

    //USER INPUT
    cout << "Total before tip: $";
    cin >> bill;

    cout << "Tip in percent: ";
    cin >> tipPercent;

    cout <<"Number of people: ";
    cin >> people; 
    
    //CALC START
    tipPercent = tipPercent / 100;
    
    tipAdder = bill * tipPercent;

    result = (tipAdder + bill) / people;
    //CALC END

    cout << "The amount for each person is : $" << setprecision(2) << fixed << result << endl;





return 0;
}
