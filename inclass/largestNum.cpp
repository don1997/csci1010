#include<iostream>
using namespace std;

int main(void)
{
    int n, largest = 0;
    
    while(n != 0){
        
        cin >> n;
        if(n > largest){
        
            largest = n;
        }    
    }
    
    cout << largest;


return 0;
}


