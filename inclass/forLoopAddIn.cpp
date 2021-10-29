#include<iostream>

using namespace std;

int main(void)
{
    int i, n, nums, sum;
    sum = 0; 
        

        
    for(i = 0; i < 10; i++){
        
        cout << "Enter Num => ";
        cin >>nums;
    
        sum += nums;
        cout << "\n";       
    }
    cout <<"The sum is ::::: " << sum << " ::::: " << endl;
return 0;
}
