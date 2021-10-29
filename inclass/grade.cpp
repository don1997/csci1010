#include<iostream>

using namespace std;

int main(void)
{

    //VAR
    int gradeIN;
    char grade;

    cout << "Please enter a score (0-100): ";
    cin >> gradeIN;

    if(gradeIN >= 90 && gradeIN <= 100){
        
        grade = 'A';

    }    
    else if(gradeIN >= 80 && gradeIN <= 89){
    
        grade = 'B';

    }


    else if(gradeIN >= 70 && gradeIN <= 89){

        grade = 'C';
    }


    else if(gradeIN >= 60 && gradeIN <= 69){

        grade = 'D';
    }

    else if(gradeIN >= 0 && gradeIN <= 59) {

        grade = 'F';

    }



    else {

        cout << "Please enter a valid score" << endl;
    
    }

     cout << "The grade is: " << grade << endl;      




return 0;
}
