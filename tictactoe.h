//tictactoe.h
//Program Description: header file of tictacktoe.cpp
#ifndef TIKTACTOE_H
#define TIKTACTOE_H

using namespace std;
//Display Tiktactoe playing board
void TTT_Display(char board[3][4]);

//Check if 'x' or 'o' wins
int TTT_CheckWin(char board[3][4]);


//Handle Both User and AI input of moves
void TTT_HandlePlayerInput(char board[3][4]);

// minimax algorithm from https://www.geeksforgeeks.org/minimax-algorithm-in-game-theory-set-3-tic-tac-toe-ai-finding-optimal-move/
int minimax(char board[3][4], int depth, bool isMax);

//Find best move for AI
void TTT_AIMove(char board[3][4]);// optimize AI that will never lose


void TTT_AIMove_Random(char board[3][4]);// dumb computer that use random to make choice


//Main function to execute TicTacToe
bool TicTacToe(int diffculty); //diffculty = 1 Optimized AI; Other Dummy AI

#endif
