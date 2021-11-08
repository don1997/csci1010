//HEADER
//NAME: Donald McLaughlin
//COURSE: CSCI 1010
//ASSIGNMENT: ASSIGNMENT 4 QUESTION 1
//SUMMARY: Takes a letter and determines whether it is a vowel or not.
#include<iostream>

using namespace std;

int main(void)
{

    //VAR
    char in;
    bool isVowel;
    //INPUT
    cout <<"Please enter a lower case character: ";
    cin >> in;

    switch(in){

    case 'a':
        isVowel = true;
        break;
    case 'e':
        isVowel = true;
        break;
    case 'i':
        isVowel = true;
        break;
    case 'o': 
        isVowel = true;
        break;
    case 'u':
        isVowel = true;
        break;
    case 'y':
        isVowel = true;
        break;
    default:
        isVowel = false;
        break;
    }
    
    //OUTPUT
    if(isVowel == true){
        
        cout << in <<" is a vowel." << endl;
    }
    else if(isVowel == false){
        cout << in <<" is not a vowel." << endl;
    }

return 0;
}
