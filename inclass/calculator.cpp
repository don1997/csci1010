#include<iostream>

using namespace std;


void formatter(){

    int i;

    for(i = 0; i < 5; ++ i){
    
        cout << "---"; 
    }
}

void spacer(){

    int i;
    for (i =0; i < 2; ++i){

        cout << "\n";
    }
}


int main(void)
{
int a, b, ans;
char oper;

while(1){

    cout << "Select which operator: ";
    cin >> oper;
    cout <<"Enter two inputs: ";
    cin >> a >> b;
    spacer();
switch (oper){
    case '+':
    ans = a + b;
    break;
    case '-':
    ans = a -b;
    break;
    case '*':
    ans = a * b;
    break;
    case '/':
    ans = a/b;
    break;
    default:
    cout << "Use a proper operator" << endl;
    break;
    }

formatter();
spacer();

cout << a << " " <<  oper << " " << b << " = " << " " << ans << endl;
}//endwhile

return 0;
}
