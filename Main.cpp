#include <iostream>
#include "tictactoe.h"
using namespace std;

void TicTacToe(int diffculty)
{
  char board[3][4]={"012","345","678"};
  int move = 0;
  TTT_Display(board);
  while(move <= 9)
  {
    move++;

    if( move % 2 == 1)
    TTT_HandlePlayerInput(board);
    else if (diffculty == 1)
    TTT_AIMove(board);
    else
    TTT_AIMove_Random(board);
    TTT_Display(board);
    if(TTT_CheckWin(board)==1)
    {
      cout << "x wins";
      break;
    }
    else if(TTT_CheckWin(board) == 2)
    {
      cout << "o wins";
      break;
    }
    else if(TTT_CheckWin(board) == 3)
    {
      cout << "tie";
      break;
    }
  }


}


int main(){
TicTacToe(1);
return 0;
}
