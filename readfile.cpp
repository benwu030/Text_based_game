#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include "Map.h"
#include "ItemAndMonster.h"

using namespace std;
string Map[30];

void load_Map(string Map[]){
  char filename[] = "Map.txt";
  ifstream fin(filename);

  string OriginalMap[30];
  OriginalMap[0] = "==========================================================================";
  OriginalMap[1] = "|---------|-----------------|----------------|----|----------------------|";
  OriginalMap[2] = "| Toilet  |                 |                |----|                      |";
  OriginalMap[3] = "|         |    Chemistry    |                |----|    Jail              |";
  OriginalMap[4] = "|---------|                 |       A1       |----|                      |";
  OriginalMap[5] = "|         |                 |-------  -------|----|----------------------|";
  OriginalMap[6] = "|  A6868  |-----    --------|      |  |           |                      |";
  OriginalMap[7] = "|               |   |              |  |             |                    |";
  OriginalMap[8] = "|----   -------/     |         , -      - ,        |  Security Office    |";
  OriginalMap[9] = "|                     |    , '               ' ,  |                      |";
  OriginalMap[10] = "|                     |  ,                       ,  |-------    ---------|";
  OriginalMap[11] = "|                     | ,                         ,         |   |        |";
  OriginalMap[12] = "|        BioLab       ===                         ==========    |        |";
  OriginalMap[13] = "|                     ===         Lobby           ===============        |";
  OriginalMap[14] = "|                   -/ ,                           ,                     |";
  OriginalMap[15] = "|                 -/    ,                          ,                     |";
  OriginalMap[16] = "|             ---/        ,                       ,                      |";
  OriginalMap[17] = "|------------/             ,                   , '                       |";
  OriginalMap[18] = "|                            '  , -      -   '                           |";
  OriginalMap[19] = "|                                  |  |                                  |";
  OriginalMap[20] = "|                                  |  |                                  |";
  OriginalMap[21] = "|-------------------|        |-----    -----|            /---------------|";
  OriginalMap[22] = "|                   |        |              |           /                |";
  OriginalMap[23] = "|     Canteen       |        |              |          |                 |";
  OriginalMap[24] = "|                   ==========              ===========       Stairs     |";
  OriginalMap[25] = "|                   ==========   Entrance   ===========                  |";
  OriginalMap[26] = "|                   |        |              |          |                 |";
  OriginalMap[27] = "|                   |        |              |          |                 |";
  OriginalMap[28] = "|-------------------|        |-----    -----|            |---------------|";
  OriginalMap[29] = "==========================================================================";

  if(fin.fail()){
    cout<<"file not exist createing file."<<endl;
    ofstream fout(filename);
    for( int i = 0; i < 30; i++)
      Map[i] = OriginalMap[i];
    for( int i = 0; i < 30; i++)
      fout << OriginalMap[i] <<endl;
    fout.close();
  }
  else{
    string line;
    cout<<"file exist. reading file..."<<endl;
    for( int i = 0; i < 30; i++){
      getline(fin,line);
      Map[i] = line;
    }


  fin.close();
}

}



void load_MainCharacter (Main_character &Chris){
  char filename[] = "ChrisStats.txt";

  ifstream fin(filename);
  if(fin.fail()){
    Chris = {"Chris Adolf",100,30,20,10,{},{"Armour_1","Armour_2"}};
    Chris.current = "Entrance";
    Chris.Map_Count = {{"Toilet",0} ,{"Chemistry",0},{"A1",0},{"Jail",0},{"A6868",0},{"BioLab",0},{"Lobby",0},{"Security Office",0},{"Canteen",0},{"Entrance",0},{"Stairs",0}};
    cout << "file not exist createing file." <<endl;
    ofstream fout(filename);
    fout << Chris.name << endl;
    fout << Chris.health << endl;
    fout << Chris.damage << endl;
    fout << Chris.speed << endl;
    fout << Chris.current <<endl;
    fout << Chris.Chris_Item_Identifiers.size() << endl;

    for (int i = 0; i < Chris.Chris_Item_Identifiers.size(); i++)
      fout << Chris.Chris_Item_Identifiers[i]<< endl;

    fout << Chris.Chris_Equitment_Identifiers.size() << endl;

    for (int i = 0; i < Chris.Chris_Equitment_Identifiers.size(); i++)
      fout << Chris.Chris_Equitment_Identifiers[i]<< endl;

    fout << Chris.Map_Count.size() << endl;

    map <string,int> ::iterator itr;
    for(itr = Chris.Map_Count.begin(); itr != Chris.Map_Count.end(); itr++)
        fout << (*itr).first<<" "<<(*itr).second <<endl;
    fout.close();
  }
  else{
    int Temp_size;
    string line;
    cout<<"file exist. reading file..."<<endl;
    getline(fin,Chris.name);
    fin >> Chris.health;
    fin >> Chris.damage;
    fin >> Chris.speed;
    getline(fin,Chris.current);
    fin >> Temp_size;
    string Temp_identifier;
    for (int i = 0; i < Temp_size; i++){
      fin >> Temp_identifier;
      Chris.Chris_Item_Identifiers.push_back(Temp_identifier);
    }

    fin >> Temp_size;

    for (int i = 0; i < Temp_size; i++){
      fin >> Temp_identifier;
      Chris.Chris_Equitment_Identifiers.push_back(Temp_identifier);
    }

    fin >> Temp_size;
    string MapName;
    int visit;
    for(int i = 0; i < Temp_size; i++){
      fin >> MapName >> visit;
      Chris.Map_Count[MapName] = visit;
    }


  fin.close();
  }
}
void SetItemAndEquiment(Main_character Chris){
  for (int i = 0; i < Chris.Chris_Item_Identifiers.size(); i++)
    for (int j = 0; j < Item_Array.size(); j++)
      if(Chris.Chris_Item_Identifiers[i] == Item_Array[j].identifier)
        Chris.Chris_Item.push_back(Item_Array[j]);

  for (int i = 0; i < Chris.Chris_Equitment_Identifiers.size(); i++)
    for (int j = 0; j < Equiment_Array.size(); j++)
        if(Chris.Chris_Equitment_Identifiers[i] == Equiment_Array[j].identifier)
            Chris.Chris_Equiment.push_back(Equiment_Array[j]);

}
void print_item(vector<Item> item){
  for ( int i = 0; i < item.size(); i++)
    cout << "[" << i << "]: " << item[i].name <<endl;
}
void print_equiment(vector<Equiment> equiment){
  for ( int i = 0; i < equiment.size(); i++)
    cout << equiment[i].name <<endl;
}
void print_Map(Main_character Chris){
  map <string,int> ::iterator itr;
  for(itr = Chris.Map_Count.begin(); itr != Chris.Map_Count.end(); itr++)
    cout << (*itr).first<<" "<<(*itr).second <<endl;
}
void display_mc(Main_character Chris){
  cout << endl << "Entity: " << Chris.name <<endl;
  cout << "Health: " << Chris.health<< endl;
  cout << "Armour: " << Chris.armour<< endl;
  cout << "Damage: " << Chris.damage<< endl;
  cout << "Speed: " << Chris.speed<< endl;
  print_item(Chris.Chris_Item);
  print_equiment(Chris.Chris_Equiment);
  print_Map(Chris);
}
