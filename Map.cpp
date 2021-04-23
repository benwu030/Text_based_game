#include <iostream>
using namespace std;




void Map_Respawn_Init(string Map[]){//function to display current location of main character in respawn point at the beginning
  string OriginalMap[30];
  OriginalMap[0] = "===========================================================================\n";
  OriginalMap[1] = "|                                        _[]_                             |\n";
  OriginalMap[2] = "|                        _______________|[][]|____                        |\n";
  OriginalMap[3] = "|                        |[][]|[][]|[][]|[][]|[][]|_____                  |\n";
  OriginalMap[4] = "|                        |  /\\|/\\  |  /\\|  /\\|/\\  |_____\\                 |\n";
  OriginalMap[5] = "|                        |[]|||||[]|[]|||[]|||||[]|[_]|||                 |\n";
  OriginalMap[6] = "|  ======================================                                 |\n";
  OriginalMap[7] = "|  -  -  -  -  -  -  -  -  -  -  -  -  -                                  |\n";
  OriginalMap[8] = "|=========================================                                |\n";
  OriginalMap[9] = "===========================================================================\n";
  for ( int i = 0; i < 10; i++ )
    Map[i] = OriginalMap[i];

}
//Entrance -> Canteen->Lobby->A1->Security->jail->biolab->A68680->Chemistry->Toilet->End

void Display_Lab_Map(string Map[]){
  for(int i = 0; i < 30; i++)
    cout << Map[i];
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

void Current_At_jail(string Map[]){
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
int main(){
  string Map[31];

  Map_Lab_Init(Map);

  Display_Lab_Map(Map);
  Current_At_Toilet(Map);
  Display_Lab_Map(Map);
  Current_At_Chemistry(Map);
  Display_Lab_Map(Map);
  Current_At_Stairs(Map);
  Display_Lab_Map(Map);
  return 0;
}
