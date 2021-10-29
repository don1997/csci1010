//HEADER
//NAME: Donald McLaughlin
//COURSE NUMBER: CSCI 1011-001
//ASSIGNMENT NUMBER: Week 9 Question 2
//SUMMARY:Rock paper scissors game. Takes the chars r, p, s as well as capitals and gives result.
//
//

#include<iostream>

using namespace std;

int main(void)
{
    //VAR
    char player1, player2 ,inplayer1,inplayer2;
   
     //INPUT    
    cout << "Player 1, please show your choice: ";
    cin >> inplayer1;
    
    cout <<"Player 2, please show your choice: ";
    cin >> inplayer2;
    
    //tolower START
    //converts input to lowercase if upper
    player1 = tolower(inplayer1);
    player2 = tolower(inplayer2);
    //tolower END
   
    //IF START
 
    if (player1 == 'p'  && player2 == 's'){

        cout << "Player 1 lost" << endl;

    }else if (player1 == 's'&& player2 == 'p'){

        cout << "Player 1 won" << endl;

    }else if (player1 == 'r' && player2 == 'p'){

        cout << "Player 1 lost" << endl;
    }else if(player1 == 'p'&& player2 == 'r'){

        cout << "Player 1 won" << endl;

    }else if(player1 == 's'&& player2 == 'r'){

        cout << "Player 1 lost" << endl;
    }else if(player1 == 'r'&& player2 == 's'){


        cout << "Player 1 won" << endl;

    }else if(player1 == player2){

        cout <<"It is a tie" << endl;
    }else{

        cout <<"Use a valid character" << endl;

    }

    //END

return 0;
}
