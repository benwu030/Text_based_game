#include<iostream>
#include <cstdlib>
#include <ctime>
#include "tictactoe.h"
using namespace std;
void TTT_Display(char board[3][4])
{
  for(int i = 0; i <= 2; i++)
  {

    for(int j = 0; j<= 2; j++)
      cout<<board[i][j]<<" ";
    cout<<endl;
  }
}
int TTT_CheckWin(char board[3][4])
{
  int win=0; //x wins = 1, o wins = 2, draw = 3
  //row
  if(board[0][0]=='x' && board[0][1]=='x'&& board[0][2]=='x' || board[1][0]=='x' && board[1][1]=='x'&& board[1][2]=='x'|| board[2][0]=='x' && board[2][1]=='x'&& board[2][2]=='x')
    win = 1;
  if(board[0][0]=='o' && board[0][1]=='o'&& board[0][2]=='o' || board[1][0]=='o' && board[1][1]=='o'&& board[1][2]=='o'|| board[2][0]=='o' && board[2][1]=='o'&& board[2][2]=='o')
    win = 2;
  //coloumn
  if(board[0][0]=='x' && board[1][0]=='x'&& board[2][0]=='x' || board[0][1]=='x' && board[1][1]=='x'&& board[2][1]=='x' || board[0][2]=='x' && board[1][2]=='x'&& board[2][2]=='x')
    win = 1;
  if(board[0][0]=='o' && board[1][0]=='o'&& board[2][0]=='o' || board[0][1]=='o' && board[1][1]=='o'&& board[2][1]=='o' || board[0][2]=='o' && board[1][2]=='o'&& board[2][2]=='o')
    win = 2;
  //diagonal
  if(board[0][0]=='x' && board[1][1]=='x'&& board[2][2]=='x' || board[0][2]=='x' && board[1][1]=='x'&& board[2][0]=='x')
    win = 1;
  if(board[0][0]=='o' && board[1][1]=='o'&& board[2][2]=='o' || board[0][2]=='o' && board[1][1]=='o'&& board[2][0]=='o')
    win = 2;

  int remain=0;
    for(int i = 0; i <= 2; i++)
      for(int j = 0; j<= 2; j++)
        if(board[i][j]=='x' or board[i][j]=='o')
          remain++;
  if(remain==9 and win==0)
    return 3;
  else
    return win;
}
void TTT_HandlePlayerInput(char board[3][4])
{
  char choice;
  int maxScore=-999,minScore=999;
  cout<<"What is your move? (Input a number from 0 to 8)"<<endl;
  cin>>choice;
  while(choice <'0' or choice >'8' or board[(choice-'0')/3][(choice-'0')%3] =='x' or board[(choice-'0')/3][(choice-'0')%3] =='o' )
  {
    if(choice <'0' or choice >'8')
    cout<<"Invalid Input, Please input a number from 0 to 8"<<endl;
    if(board[(choice-'0')/3][(choice-'0')%3] =='x' or board[(choice-'0')/3][(choice-'0')%3] =='o')
    cout<<"The position is occupied, please choose again"<<endl;
    cin>>choice;
  }
  board[(choice-'0')/3][(choice-'0')%3]='x';
}
// minimax algorithm from https://www.geeksforgeeks.org/minimax-algorithm-in-game-theory-set-3-tic-tac-toe-ai-finding-optimal-move/
int minimax(char board[3][4], int depth, bool isMax){
  int minScore=999, maxScore=-999,potentialScore;

  if(TTT_CheckWin(board)==1)// player(minimizer) wins
    return -10+depth;//add the depth because we are finding the less depth move instead of most depth moves
  if(TTT_CheckWin(board)==2)//Ai(maximizer) wins
    return 10-depth;
  if(TTT_CheckWin(board)==3)//tie
    return 0;
    //maximizer move (AI)
  if(isMax){

    for(int i = 0; i <= 2; i++){
      for(int j = 0; j<= 2; j++)
      {
        if(board[i][j] != 'x' and board[i][j] != 'o')
        {
          board[i][j] = 'o';
          maxScore = max(maxScore ,minimax(board,depth+1,false));//next player is the minimizer
          board[i][j] = char(i*3+j+'0');//revese the change
        }
      }
    }
  return maxScore;
 }
 //minimizer possible moves(player)
 else
 {
   for(int i = 0; i <= 2; i++){
     for(int j = 0; j<= 2; j++)
     {
       if(board[i][j] != 'x' and board[i][j] != 'o')
       {
         board[i][j] = 'x';
         minScore = min(minScore ,minimax(board,depth+1,true));//next player is the minimizer

         board[i][j] = char(i*3+j+'0');//revese the change

         }
       }
     }
    return minScore;
    }
  }
void TTT_AIMove(char board[3][4])// optimize AI that will never lose
{
  int FinalAIMove, maxScore=-999,potentialScore;
  for(int i = 0; i <= 2; i++)
    for(int j = 0; j<= 2; j++)
    {
      if(board[i][j] != 'x' and board[i][j] != 'o')
      {
        board[i][j] = 'o';
        potentialScore = minimax(board,0,false);
        board[i][j] = char(i*3+j+'0');
        if(potentialScore > maxScore)
        {
          maxScore = potentialScore;
          FinalAIMove= i*3+j;
        }
      }
    }
    cout<<"AI chooses "<<FinalAIMove<<endl;
    board[FinalAIMove/3][FinalAIMove%3] = 'o';
}
void TTT_AIMove_Random(char board[3][4])// dumb computer that use random to make choice
{
  srand( time(NULL) );
  int Move = rand() % 9;
  while(board[Move/3][Move%3]=='x' or board[Move/3][Move%3]=='y')
    Move = rand() % 9;
  board[Move/3][Move%3]='o';
  cout<<"AI chooses "<<Move<<endl;
}
// int main()
// {
//   char board[3][4]={"012","345","678"};
//   int move=0;
//   TTT_Display(board);
//   while(move<=9)
//   {
//     move++;
//
//     if(move%2==1)
//     TTT_HandlePlayerInput(board);
//     else
//     //TTT_AIMove(board);
//     //TTT_AIMove_Random(board);
//     TTT_Display(board);
//     if(TTT_CheckWin(board)==1)
//     {
//       cout<<"x wins";
//       break;
//     }
//     else if(TTT_CheckWin(board)==2)
//     {
//       cout<<"o wins";
//       break;
//     }
//     else if(TTT_CheckWin(board)==3)
//     {
//       cout<<"tie";
//       break;
//     }
//   }
//
//
//   return 0;
// }
