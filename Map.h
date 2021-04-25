//Map.h
#ifndef MAP_H
#define MAP_H
#include<iostream>
#include<string>

using namespace std;

//Entrance -> Canteen->Lobby->A1->Security->jail->biolab->A68680->Chemistry->Toilet->End

void Display_Lab_Map(string Map[]){
  for(int i = 0; i < 30; i++)
    cout << Map[i] << endl;
}

void removePlayerLocation(string Map[]){
  for( int i = 0; i < 30; i++ )
    Map[i][Map[i].find("*")] = ' ';
}

void Current_At_Chemistry(string Map[]){
  removePlayerLocation(Map);
    Map[2][19]='*';
}

void Current_At_Toilet(string Map[]){
  removePlayerLocation(Map);
    Map[3][5]='*';
}

void Current_At_A1(string Map[]){
  removePlayerLocation(Map);
    Map[3][36]='*';
}

void Current_At_Jail(string Map[]){
  removePlayerLocation(Map);
    Map[4][60]='*';
}

void Current_At_A6868(string Map[]){
  removePlayerLocation(Map);
    Map[7][6]='*';
}

void Current_At_SecurityOffice(string Map[]){
  removePlayerLocation(Map);
    Map[7][62]='*';
}



void Current_At_BioLab(string Map[]){
  removePlayerLocation(Map);
    Map[11][10]='*';
}

void Current_At_Lobby(string Map[]){
  removePlayerLocation(Map);
    Map[15][36]='*';
}

void Current_At_Canteen(string Map[]){
  removePlayerLocation(Map);
    Map[25][10]='*';
}

void Current_At_Entrance(string Map[]){
  removePlayerLocation(Map);
    Map[27][36]='*';
}

void Current_At_Stairs(string Map[]){
  removePlayerLocation(Map);
    Map[26][64]='*';
}
#endif
