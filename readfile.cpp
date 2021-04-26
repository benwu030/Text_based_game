//readfile.cpp
//Program Description: Contains Fucntions for Reading file
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include "Map.h"
#include "ItemAndMonster.h"
#include "readfile.h"

using namespace std;

//Initialize The Game MAP
//Copy Orginal Map to Game Map
//Output the map to Map.txt
void Create_NewMap(string Map[]){

  string OriginalMap[31];
  OriginalMap[0] = "==========================================================================";
  OriginalMap[1] = "|---------|-----------------|----------------|----|----------------------|";
  OriginalMap[2] = "| Toilet  |                 |                |----|                      |";
  OriginalMap[3] = "|         |    Chemistry    |                |----|    Jail              |";
  OriginalMap[4] = "|---- ----|                 |       A1       |----|                      |";
  OriginalMap[5] = "|         |                 |-------  -------|----|----------------------|";
  OriginalMap[6] = "|  A6868  |-----    --------|      |  |           |                      |";
  OriginalMap[7] = "|               |   |              |  |             |                    |";
  OriginalMap[8] = "|----   -------/     |         , -      - ,        |  SecurityOffice     |";
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
  OriginalMap[29] = "|                                Outside                                 |";
  OriginalMap[30] = "==========================================================================";

  char filename[] = "Map.txt";

  ofstream fout(filename);
  //Initialize Game Map
  for( int i = 0; i < 31; i++)
    Map[i] = OriginalMap[i];
  //output Map to Map.txt for saving
  for( int i = 0; i < 31; i++)
    fout << Map[i];

  fout.close();

}
//Funtion to load map from Map.txt
void load_Map(string Map[]){
  char filename[] = "Map.txt";
  ifstream fin(filename);

  if(fin.fail()){ //if file not exist create a new file
    //cout<<"file not exist createing file."<<endl;
    Create_NewMap(Map);
  }
  else{ //if file exist, read it to Map
    string line;
    //cout<<"file exist. reading file..."<<endl;
    for( int i = 0; i < 31; i++){
      getline(fin,line);
      Map[i] = line;
    }


  fin.close();
}

}

//Initialize MainCharacter Chris
void Create_NewChararcter (Main_character &Chris){
  char filename[] = "ChrisStats.txt";
  //Initialize Chris Attributes
  Chris = {"Chris Adolf",100,15,0,30,"entrance",{},{}};
  Chris.Map_Count = {{"Toilet",0} ,{"Chemistry",0},{"A1",0},{"Jail",0},{"A6868",0},{"BioLab",0},{"Lobby",0},{"SecurityOffice",0},{"Canteen",0},{"Entrance",0},{"Stairs",0}};

  //cout << "file not exist createing file." <<endl;
  ofstream fout(filename); //create ChrisStats.txt
  //output Attributes of Chris to ChrisStats.txt for saving
  fout << Chris.name << endl;
  fout << Chris.health << endl;
  fout << Chris.damage << endl;
  fout << Chris.armour << endl;
  fout << Chris.speed << endl;
  fout << Chris.current <<endl;
  //see ItemAndMonster.h
  //save length of Chris_Item_Identifiers
  fout << Chris.Chris_Item_Identifiers.size() << endl;
  //save Chris_Item_Identifiers
  for (int i = 0; i < Chris.Chris_Item_Identifiers.size(); i++)
    fout << Chris.Chris_Item_Identifiers[i]<< endl;
  //save length of Chris_Equitment_Identifiers
  fout << Chris.Chris_Equitment_Identifiers.size() << endl;
  //save Chris_Equitment_Identifiers
  for (int i = 0; i < Chris.Chris_Equitment_Identifiers.size(); i++)
    fout << Chris.Chris_Equitment_Identifiers[i]<< endl;
  //save length of Map_Count
  fout << Chris.Map_Count.size() << endl;
  //use iterator to  go through and save key and value of Map_Count into file
  map <string,int> ::iterator itr;
  for(itr = Chris.Map_Count.begin(); itr != Chris.Map_Count.end(); itr++)
      fout << (*itr).first<<" "<<(*itr).second <<endl;
  fout.close();
}
//Load Attributes of Chris from file
void load_MainCharacter (Main_character &Chris){

  char filename[] = "ChrisStats.txt";

  ifstream fin(filename);//open file

  if(fin.fail()){//if file not exist, create new character
    Create_NewChararcter(Chris);
  }
  else{
    int Temp_size;
    string line;
    //cout<<"file exist. reading file..."<<endl;
    getline(fin,Chris.name);//use getline because there is space between Chris's Name
    fin >> Chris.health;
    fin >> Chris.damage;
    fin >> Chris.armour;
    fin >> Chris.speed;
    fin >>Chris.current;

    string Temp_identifier;
  //save Chris_Item_Identifiers
    fin >> Temp_size;

    for (int i = 0; i < Temp_size; i++){
      fin >> Temp_identifier;
      Chris.Chris_Item_Identifiers.push_back(Temp_identifier);
    }

    //save Chris_Equitment_Identifiers
    fin >> Temp_size;

    for (int i = 0; i < Temp_size; i++){
      fin >> Temp_identifier;
      Chris.Chris_Equitment_Identifiers.push_back(Temp_identifier);
    }
    //save Map_Count
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

//Use identifier to search for corresponding object and save it to Chris
//Read names in Chris_Item_Identifiers
//Search for corresponding item in Item_Array
//push it back to Chris_Item
void SetItemAndEquiment(Main_character &Chris, vector<Item> Item_Array, vector<Equiment> Equiment_Array){

  for (int i = 0; i < Chris.Chris_Item_Identifiers.size(); i++)
    for (int j = 0; j < Item_Array.size(); j++)
      if(Chris.Chris_Item_Identifiers[i] == Item_Array[j].identifier){
        Chris.Chris_Item.push_back(Item_Array[j]);
        break;
      }


  for (int i = 0; i < Chris.Chris_Equitment_Identifiers.size(); i++)
    for (int j = 0; j < Equiment_Array.size(); j++)
        if(Chris.Chris_Equitment_Identifiers[i] == Equiment_Array[j].identifier){
          Chris.Chris_Equiment.push_back(Equiment_Array[j]);
          break;
        }

}

//print Chris_Item out
void print_item(vector<Item> item){
  for ( int i = 0; i < item.size(); i++){
    cout << "[" << i << "]: " << item[i].name;
    if(item[i].type == 1)
      cout << " It can heal you by " << item[i].value << " HP."  << endl;
    else if (item[i].type == 2)
    cout << " It can cause " << item[i].value << " damage." << endl;
    else if (item[i].type == 0)
    cout << " It is a map item, it can use to unlock something. " << endl;
  }
}
//print Chris_Equiment out
void print_equiment(vector<Equiment> equiment){
  for ( int i = 0; i < equiment.size(); i++)
    cout << equiment[i].name <<endl;
}
//print Map_Count
//usually use for debugg
void print_Map(Main_character Chris){
  map <string,int> ::iterator itr;
  for(itr = Chris.Map_Count.begin(); itr != Chris.Map_Count.end(); itr++)
    cout << (*itr).first<<" "<<(*itr).second <<endl;
}

//print Main_character Attributes
void display_mc(Main_character Chris){
  cout << endl << "Entity: " << Chris.name <<endl;
  cout << "Health: " << Chris.health<< endl;
  cout << "Armour: " << Chris.armour<< endl;
  cout << "Damage: " << Chris.damage<< endl;
  cout << "Speed: " << Chris.speed<< endl;
  cout << "Current "<<Chris.current<<endl;
  print_item(Chris.Chris_Item);
  print_equiment(Chris.Chris_Equiment);
  print_Map(Chris);
}
