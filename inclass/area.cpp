#include<iostream>
#include<cmath>
using namespace std;

int main()
{
//CONST Declaration
const double pi = 3.14;
//VAR Declaration
double r, area;

//Radius INPUT and OUTPUT
cout << "Please enter radius: " << endl;
cin >> r;
    //Calc
    area = pi * pow(r,2);

cout <<"The area of the circle is: " << area;
return 0;
}
