#include<iostream>

using namespace std;
int main(void)
{

    int n,i, sum;
    
    cout << "Enter integers (0 to terminate) " << endl;
    cin >> n;
    
    while(n != 0){

        sum = sum + n;
        cin >> n;

    }

    cout << sum << endl;



return 0;
}
