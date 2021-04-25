#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include "ItemAndMonster.h"

using namespace std;





void load_map(vector<string> &map){
  char filename[] = "map.txt";
  ifstream fin(filename);

  string OriginalMap[30];
  OriginalMap[0] = "==========================================================================\n";
  OriginalMap[1] = "|---------|-----------------|----------------|----|----------------------|\n";
  OriginalMap[2] = "| Toilet  |                 |                |----|                      |\n";
  OriginalMap[3] = "|         |    Chemistry    |                |----|    Jail              |\n";
  OriginalMap[4] = "|---------|                 |       A1       |----|                      |\n";
  OriginalMap[5] = "|         |                 |-------  -------|----|----------------------|\n";
  OriginalMap[6] = "|  A6868  |-----    --------|      |  |           |                      |\n";
  OriginalMap[7] = "|               |   |              |  |             |                    |\n";
  OriginalMap[8] = "|----   -------/     |         , -      - ,        |  Security Office    |\n";
  OriginalMap[9] = "|                     |    , '               ' ,  |                      |\n";
  OriginalMap[10] = "|                     |  ,                       ,  |-------    ---------|\n";
  OriginalMap[11] = "|                     | ,                         ,         |   |        |\n";
  OriginalMap[12] = "|        BioLab       ===                         ==========    |        |\n";
  OriginalMap[13] = "|                     ===         Lobby           ===============        |\n";
  OriginalMap[14] = "|                   -/ ,                           ,                     |\n";
  OriginalMap[15] = "|                 -/    ,                          ,                     |\n";
  OriginalMap[16] = "|             ---/        ,                       ,                      |\n";
  OriginalMap[17] = "|------------/             ,                   , '                       |\n";
  OriginalMap[18] = "|                            '  , -      -   '                           |\n";
  OriginalMap[19] = "|                                  |  |                                  |\n";
  OriginalMap[20] = "|                                  |  |                                  |\n";
  OriginalMap[21] = "|-------------------|        |-----    -----|            /---------------|\n";
  OriginalMap[22] = "|                   |        |              |           /                |\n";
  OriginalMap[23] = "|     Canteen       |        |              |          |                 |\n";
  OriginalMap[24] = "|                   ==========              ===========       Stairs     |\n";
  OriginalMap[25] = "|                   ==========   Entrance   ===========                  |\n";
  OriginalMap[26] = "|                   |        |              |          |                 |\n";
  OriginalMap[27] = "|                   |        |              |          |                 |\n";
  OriginalMap[28] = "|-------------------|        |-----    -----|            |---------------|\n";
  OriginalMap[29] = "==========================================================================\n";

  if(fin.fail()){
    cout<<"file not exist createing file."<<endl;
    ofstream fout(filename);
    for( int i = 0; i < 30; i++)
      fout << OriginalMap[i];
    fout.close();
  }
  else{
    string line;
    cout<<"file exist. reading file..."<<endl;
    while(getline(fin,line))
      map.push_back(line);
  fin.close();
}
}
void Display_Lab_Map(vector<string>map){

  for ( int i = 0; i < map.size();i++)
    cout << map[i]<<endl;
}


void load_MainCharacter (Main_character Chris){
  char filename[] = "ChrisStats.txt";

  ifstream fin(filename);
  if(fin.fail()){
    Chris = {"Chris Adolf",100,30,5,10,{},{"Armour_1","Armour_2"}};
    cout << "file not exist createing file." <<endl;
    ofstream fout(filename);
    fout << Chris.name << endl;
    fout << Chris.health << endl;
    fout << Chris.damage << endl;
    fout << Chris.speed << endl;
    fout << Chris.Chris_Item_Identifiers.size() << endl;

    for (int i = 0; i < Chris.Chris_Item_Identifiers.size(); i++)
      fout << Chris.Chris_Item_Identifiers[i]<< endl;

    fout << Chris.Chris_Equitment_Identifiers.size() << endl;

    for (int i = 0; i < Chris.Chris_Equitment_Identifiers.size(); i++)
      fout << Chris.Chris_Equitment_Identifiers[i]<< endl;
    /*Chris.name = "Chris Adolf";
    Chris.health = 100;
    Chris.damage = 30;
    Chris.armour = 20;
    Chris.speed = 10;
    Chris.Equiment =*/
    fout.close();
  }
  else{
    int Temp_size;
    string line;
    cout<<"file exist. reading file..."<<endl;
    fin >> line;
    Chris.name = line;
    fin >> line;
    fin >> Chris.health;
    fin >> Chris.damage;
    fin >> Chris.speed;
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

void display_mc(Main_character Chris){
  cout << endl << "Entity: " << Chris.name <<endl;
  cout << "Health: " << Chris.health<< endl;
  cout << "Armour: " << Chris.armour<< endl;
  cout << "Damage: " << Chris.damage<< endl;
  cout << "Speed: " << Chris.speed<< endl;
  print_item(Chris.Chris_Item);
  print_equiment(Chris.Chris_Equiment);
}
int main(){
  vector<string> map;
  Main_character Chris;
  load_MainCharacter(Chris);
  SetItemAndEquiment(Chris);
  display_mc(Chris);
  // load_map(map);
  // Display_Lab_Map(map);
  return 0;
}
