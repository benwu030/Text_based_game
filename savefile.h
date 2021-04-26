//savefile.h
//Program Description: header file of savefile.cpp
#ifndef SAVEFILE_H
#define SAVEFILE_H
#include "ItemAndMonster.h"
#include <string>
using namespace std;
//Save Map changes to Map.txt
void SaveMap(string Map[]);

//Save Attributes of Chris to ChrisStats.txt
void SaveCharacter(Main_character &Chris);

#endif
