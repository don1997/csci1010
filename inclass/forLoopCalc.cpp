#include<iostream>
#include<cmath>
#include<unistd.h>
#include<cstdlib>
#include<conio.h>
using namespace std;


void cls()
{
    int i;
    for(i = 0; i < 10; i++){

        cout << endl;    

    }


}


int main(void)
{

    int i, answer,a;
while(true){
    cls();
    int i = 0, answer = 0, a = 0;
    for(i = 1; i <= 20; i++){
          
     
        usleep(100000);
        a = pow(i,2);
        answer += pow(i,2);
    
        cout << a << " + ";
        cout.flush();
        
    }
        
    cout << " = " << answer << endl;

}//endWHILE


return 0;
}
