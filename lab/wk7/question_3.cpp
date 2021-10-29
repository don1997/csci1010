//HEADER START
//NAME: Donald McLaughlin
//COURSE:CSCI1011-001
//ASSIGNMENT: Week 7 Lab Question 3
//SUMMARY: Given several inputs, allows the user to figure out how many chocolate bars they can eat in relation to their BMR.
//HEADER END


#include<iostream>
#include<iomanip>
using namespace std;

int main(void){
    //CONST
    const double CHOCOCAL = 230;
    //VAR
    double height, weight, age, bmr, getChocolateBars;
    char gender;

    //USER INPUT

    cout << "Enter m for male and f for female : ";
    cin >> gender;

    cout << "Enter the person's weight, height, and age: ";
    cin >> weight >> height >> age;

    //isMALEorFEMALE?

    if(gender == 'm'){
        
        bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age); 
     
    }

    if(gender == 'f'){
    
        bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
    
    }



    //CALC
    
    getChocolateBars = bmr / CHOCOCAL;


    //CALC END


    //OUTPUT

    cout << "You can eat " << setprecision(1) << fixed <<  getChocolateBars << " chocolate bars." << endl;

return 0;
}
