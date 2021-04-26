#ifndef SAVEFILE_H
#define SAVEFILE_H
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include"Map.h"
#include"readfile.h"
using namespace std;

void SaveMap(string Map[]){
  char filename[] = "Map.txt";
  ofstream fout(filename);
  for( int i = 0; i <31; i++)
    fout << Map[i] <<endl;

  fout.close();
}

void SaveCharacter(Main_character Chris){
  char filename[] = "ChrisStats.txt";
  ofstream fout(filename);
  fout << Chris.name << endl;
  fout << Chris.health << endl;
  fout << Chris.damage << endl;
  fout << Chris.armour << endl;
  fout << Chris.speed << endl;
  fout << Chris.current << endl;
  fout << Chris.Chris_Item.size() << endl;

  for (int i = 0; i < Chris.Chris_Item.size(); i++)
    fout << Chris.Chris_Item[i].identifier<< endl;

  fout << Chris.Chris_Equiment.size() << endl;

  for (int i = 0; i < Chris.Chris_Equiment.size(); i++)
    fout << Chris.Chris_Equiment[i].identifier<< endl;
  map <string,int> ::iterator itr;
  for(itr = Chris.Map_Count.begin(); itr != Chris.Map_Count.end(); itr++)
      fout << (*itr).first<<" "<<(*itr).second <<endl;
  fout.close();

}

#endif
