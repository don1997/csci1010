//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010
//ASSIGNMENT: Question 4 Assignment 6
//SUMMARY: Input grades and finds the highest, lowest, and average grades.
//

#include<iostream>

using namespace std;


//Finds highest grade out of array 
int highestGrade(int grade[]){

    int i;
    
    int max = grade[0];

    for (i = 1; i < 10; i++){

        if (grade[i] > max){
        
            max = grade[i];

        }
    
    
    }
    return max;
}

//Finds lowest grade out of array
int lowestGrade(int grade[]){

    int i;
        
    int lowest = grade[0];

    for (i = 1; i < 10; i++){

        if (grade[i] < lowest){
            
            lowest = grade[i];

        }   
    
    
    }   
    return lowest;
}


//Finds sum of array
int getArraySum(int grade[]){
    int sum = 0;


    for (int i = 0; i < 10; i++){
        sum += grade[i];

    }

    return sum;

}


//Finds the average of the array of grades.
int getMean(int grade[]){

    int sum = getArraySum(grade);
    int mean = sum / 10;
    
    return mean;

}





int main(void)
{


    //VAR
    int i, j, a;
    int grade[11];
    j = 0;
    for(i = 0; i < 10; i++){
        j += 1;
        cout << "Enter grade " << j << " : ";
        cin >> grade[i];
         
    }
    
    cout << "The highest grade is: " <<  highestGrade(grade) << endl;
    cout << "The lowest grade is: " << lowestGrade(grade) << endl;
    cout << "The average grade is " << getMean(grade) << endl;
return 0;
}
