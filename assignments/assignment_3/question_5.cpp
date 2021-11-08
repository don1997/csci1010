//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010
//ASSIGNMENT: Assignment 3 Question 5
//SUMMARY: Takes a time in seconds and converts it into hours, minutes, and seconds.

#include<iostream>

using namespace std;

int main(void)
{
    //VAR
    int time, sec, min, hour;

    //User INPUT
    cout << "Enter a time in seconds: ";
    cin >> time;

    //CALC START

    hour = time / 3600;
    time = time % 3600;
    min = time / 60;
    time = time % 60;
    sec = time;
 
    //CALC END
     
    //DISPLAY OUTPUT
    cout << "The time is: " << hour << " hours, " << min << " minutes, and " << sec << " seconds." << endl;


return 0;
}
