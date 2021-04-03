//tiktactoe.h
#ifndef TIKTACTOE_H
#define TIKTACTOE_H
void TTT_Display(char board[3][4]);
int TTT_CheckWin(char board[3][4]);
void TTT_HandlePlayerInput(char board[3][4]);
void TTT_AIMove(char board[3][4]);
void TTT_AIMove_Random(char board[3][4]);
void TicTacToe(int diffculty);
#endif
