#ifndef MAIN_MENU_H
#define MAIN_MENU_H
#include "ItemAndMonster.h"
void SetColor(int value);
void print_MainMenu();
void print_Victory();
void print_Lose();
bool MainMenu_Choice(string choice,string Map[],Main_character &Chris, vector<Item> Item_Array, vector<Equiment> Equiment_Array);

#endif
