#include<iostream>
using namespace std;

//adds ---
void formatter(){
    for (int i = 0;i < 5; i++){
         cout << "---";
    }cout << endl;

}

//adds newline
void newlines(){
    cout << "\n";
}


int main(void)
{

    //VAR
    int a, b, c;

    cout << "Enter two integers : ";
    cin >> a >> b;
    
    //CALC    
    c = a + b;
    
    newlines(); 
    formatter();
     
    cout << a << " + " << b << " = " << c << endl;
    
    formatter();

return 0;
}
