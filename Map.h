//Map.h
//Program Description: header file of Map.cpp
#ifndef MAP_H
#define MAP_H
#include<string>
using namespace std;

//winning Path
//Entrance -> Canteen->Lobby->A1->Security->jail->biolab->A68680->Chemistry->Toilet->End

//Display Game Map
void Display_Lab_Map(string Map[]);

//Remove the '*' i.e Player Current Location
void removePlayerLocation(string Map[]);

//Remove the wall in Jail when Wall Bomb is used
void BombTheWall(string Map[]);

//Set Player Current Location at Chemistry
void Current_At_Chemistry(string Map[]);
//Set Player Current Location at Toilet
void Current_At_Toilet(string Map[]);
//Set Player Current Location at A1
void Current_At_A1(string Map[]);
//Set Player Current Location at Jail
void Current_At_Jail(string Map[]);
//Set Player Current Location at A6868
void Current_At_A6868(string Map[]);
//Set Player Current Location at SecurityOffice
void Current_At_SecurityOffice(string Map[]);


//Set Player Current Location at BioLab
void Current_At_BioLab(string Map[]);
//Set Player Current Location at Lobby
void Current_At_Lobby(string Map[]);
//Set Player Current Location at Canteen
void Current_At_Canteen(string Map[]);
//Set Player Current Location at Entrance
void Current_At_Entrance(string Map[]);
//Set Player Current Location at Stairs
void Current_At_Stairs(string Map[]);
#endif
