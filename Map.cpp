//Map.cpp
//Program Description: Contains Functions for altering Game Map
#include<iostream>
#include<string>
#include "Map.h"
using namespace std;
//winning Path
//Entrance -> Canteen->Lobby->A1->Security->jail->biolab->A68680->Chemistry->Toilet->End

//Display Game Map
void Display_Lab_Map(string Map[]){
  for(int i = 0; i < 31; i++)
    cout << Map[i] << endl;
}

//Remove the '*' i.e Player Current Location
void removePlayerLocation(string Map[]){
  for( int i = 0; i < 31; i++ )
    Map[i][Map[i].find("*")] = ' ';
}

//Remove the wall in Jail when Wall Bomb is used
void BombTheWall(string Map[]){

    Map[5][60]=' ';
}

//Set Player Current Location at Chemistry
void Current_At_Chemistry(string Map[]){
  removePlayerLocation(Map);
    Map[2][19]='*';
}
//Set Player Current Location at Toilet
void Current_At_Toilet(string Map[]){
  removePlayerLocation(Map);
    Map[3][5]='*';
}
//Set Player Current Location at A1
void Current_At_A1(string Map[]){
  removePlayerLocation(Map);
    Map[3][36]='*';
}
//Set Player Current Location at Jail
void Current_At_Jail(string Map[]){
  removePlayerLocation(Map);
    Map[4][60]='*';
}
//Set Player Current Location at A6868
void Current_At_A6868(string Map[]){
  removePlayerLocation(Map);
    Map[7][6]='*';
}
//Set Player Current Location at SecurityOffice
void Current_At_SecurityOffice(string Map[]){
  removePlayerLocation(Map);
    Map[7][62]='*';
}


//Set Player Current Location at BioLab
void Current_At_BioLab(string Map[]){
  removePlayerLocation(Map);
    Map[11][10]='*';
}
//Set Player Current Location at Lobby
void Current_At_Lobby(string Map[]){
  removePlayerLocation(Map);
    Map[15][36]='*';
}
//Set Player Current Location at Canteen
void Current_At_Canteen(string Map[]){
  removePlayerLocation(Map);
    Map[25][10]='*';
}
//Set Player Current Location at Entrance
void Current_At_Entrance(string Map[]){
  removePlayerLocation(Map);
    Map[27][36]='*';
}
//Set Player Current Location at Stairs
void Current_At_Stairs(string Map[]){
  removePlayerLocation(Map);
    Map[26][64]='*';
}
