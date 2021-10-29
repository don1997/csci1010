#include<iostream>                                                         

using namespace std;

int main(void)
{   
    //VAR
    int i, n, nums, largest;
 
      
    

    
    for(i = 0; i < 10; i++){
    
        cout << "Enter Num => ";
        cin >> nums;
            
        //Determine largest
        
        if(i == 1){
        
            largest = nums;

        }//ENDIF 
        else
        {
            if(nums > largest){
                largest =nums;
            }
        }   
    
    }//ENDFOR 
    
    //DISPLAY  
    cout <<"The largest number is is ::::: " << largest << " ::::: " << endl;
return 0;
}

