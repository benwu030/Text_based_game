//savefile.h
//Program Description: Functions to handle save files
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include"Map.h"
#include"readfile.h"
#include"savefile.h"
using namespace std;

//Save Map changes to Map.txt
void SaveMap(string Map[]){
  char filename[] = "Map.txt";
  ofstream fout(filename);
  for( int i = 0; i <31; i++)
    fout << Map[i] <<endl;

  fout.close();
}

//Save Attributes of Chris to ChrisStats.txt
void SaveCharacter(Main_character &Chris){
  char filename[] = "ChrisStats.txt";
  ofstream fout(filename);
  fout << Chris.name << endl;
  fout << Chris.health << endl;
  fout << Chris.damage << endl;
  fout << Chris.armour << endl;
  fout << Chris.speed << endl;
  fout << Chris.current << endl;
  //save length of Chris_Items
  fout << Chris.Chris_Item.size() << endl;
  //save Chris_Item_Identifiers
  for (int i = 0; i < Chris.Chris_Item.size(); i++)
    fout << Chris.Chris_Item[i].identifier<< endl;
    //save length of Chris_Equiment
  fout << Chris.Chris_Equiment.size() << endl;
  //save Chris_Equitment_Identifiers
  for (int i = 0; i < Chris.Chris_Equiment.size(); i++)
    fout << Chris.Chris_Equiment[i].identifier<< endl;
    //save key and value of Map_Count
  map <string,int> ::iterator itr;
  for(itr = Chris.Map_Count.begin(); itr != Chris.Map_Count.end(); itr++)
      fout << (*itr).first<<" "<<(*itr).second <<endl;
  fout.close();

}
