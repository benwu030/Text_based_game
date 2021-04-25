#ifndef SAVEFILE_H
#define SAVEFILE_H
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include"readfile.h"
using namespace std;

void SaveMap(vector<string> Map){
  char filename[] = "map.txt";
  ofstream fout(filename);
  for( int i = 0; i < Map.size(); i++)
    fout << Map[i];

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
  fout << Chris.Chris_Item_Identifiers.size() << endl;

  for (int i = 0; i < Chris.Chris_Item_Identifiers.size(); i++)
    fout << Chris.Chris_Item_Identifiers[i]<< endl;

  fout << Chris.Chris_Equitment_Identifiers.size() << endl;

  for (int i = 0; i < Chris.Chris_Equitment_Identifiers.size(); i++)
    fout << Chris.Chris_Equitment_Identifiers[i]<< endl;
  map <string,int> ::iterator itr;
  for(itr = Chris.Map_Count.begin(); itr != Chris.Map_Count.end(); itr++)
      fout << (*itr).first<<" "<<(*itr).second <<endl;
  fout.close();

}
#endif
