#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
using namespace std;





void load_map(vector<string> &map){
  char filename[] = "map.txt";
  ifstream fin(filename);

  string OriginalMap[30];
  OriginalMap[0] = "==========================================================================\n";
  OriginalMap[1] = "|---------|-----------------|----------------|----|----------------------|\n";
  OriginalMap[2] = "| Toilet  |                 |                |----|                      |\n";
  OriginalMap[3] = "|         |    Chemistry    |                |----|    jail              |\n";
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

int main(){
  vector<string> map;
  load_map(map);
  Display_Lab_Map(map);
  return 0;
}
