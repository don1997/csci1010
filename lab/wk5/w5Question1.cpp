#include<iostream>
#define _USE_MATH_DEFINES


using namespace std;

int main()
{
   double radius, height, volume;

    cout << "Please enter the radius: ";
    cin >> radius;
    cout << "Please enter the height: ";
    cin >> height;
    
    volume = 3.14 * radius * radius * height;
    
    cout << "The volume is: " << volume;  

return 0;
}
