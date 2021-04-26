//readfile.h
//Program Description: header file of readfile.cpp
#ifndef READFILE_H
#define READFILE_H


using namespace std;

//Initialize The Game MAP
//Copy Orginal Map to Game Map
//Output the map to Map.txt
void Create_NewMap(string Map[]);
//Funtion to load map from Map.txt
void load_Map(string Map[]);

//Initialize MainCharacter Chris
void Create_NewChararcter (Main_character &Chris);
//Load Attributes of Chris from file
void load_MainCharacter (Main_character &Chris);

//Use identifier to search for corresponding object and save it to Chris
//Read names in Chris_Item_Identifiers
//Search for corresponding item in Item_Array
//push it back to Chris_Item
void SetItemAndEquiment(Main_character &Chris);

//print Chris_Item out
void print_item(vector<Item> item);
//print Chris_Equiment out
void print_equiment(vector<Equiment> equiment);
//print Map_Count
//usually use for debugg
void print_Map(Main_character Chris);

//print Main_character Attributes
void display_mc(Main_character Chris);


#endif
