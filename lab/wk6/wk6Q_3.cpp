#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    //VAR
    double x, y, squareSum, z;
    
    cout << "Enter two numbers for a point x and y: ";
    cin >> x >> y;
    
    //CALC
   
    squareSum = pow(x,2) + pow(y,2);
    z = sqrt(squareSum);
    
    cout << "The sum of squares is: " << squareSum << endl;
    cout << "The distance of point (" << x << "," << y << ") to the origin point is: " << z << endl;
    //OUTPUT
     


return 0;
}
