//battle.h
//Program Description: header file of battle.cpp
#ifndef BATTLE_H
#define BATTLE_H

//This function is to display characters' images and appearances during combat stage
//The parameter p is taken randomly based on the difficulty we set
void displayCharacters(int a, Monster p,Main_character Chris);

//Summoning this function means that random monster appears and leads us to battle stage
int battleStats(int a,Main_character &Chris, vector<Monster> Monster_Array);

#endif
