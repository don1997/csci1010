#include<iostream> 
using namespace std;

int main(void)
{

    //CONST

    //VAR
    int dayOfWeek, year, month, day;
    int y0, x, m0, d0;
    
    //USER
    cout << "Please enter a four digit number for year: ";
    cin >> year;
    
    cout << "Please enter a number for month, use 1 to 12 to represent Jan to Dec: ";
    cin >> month;
    
    cout << "Please enter a number for the day, 1 to 31: ";
    cin >> day;
    //CALC
    y0 = year - (14 - month) / 12;
    x = y0 + y0 /4 - y0 / 100 + y0 / 400;
    m0 = month + 12 * ((14-month) / 12) - 2;
    dayOfWeek = (day + x + (31 * m0) / 12) % 7;
    //OUTPUT 

    cout <<"the day of the week is: " << dayOfWeek << endl;
    
    


return 0;
}
