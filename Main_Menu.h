#ifndef MAIN_MENU_H
#define MAIN_MENU_H
#include "ItemAndMonster.h"

//funtion to print MainMenu_Choice
void print_MainMenu();
//funtion to print Winning Page
void print_Victory();
//funtion to print Losing Page
void print_Lose();
//function to hanle input from main page
bool MainMenu_Choice(string choice,string Map[],Main_character &Chris);

#endif
