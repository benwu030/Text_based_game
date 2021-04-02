#include <iostream>
using namespace std;




void Map_Respawn_Display(void){//function to display current location of main character in respawn point at the beginning
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
    cout << OriginalMap[i];

}
void Map_Lab_Display(string location){ //function to display current location of main character in main lab
  string OriginalMap[30];
  OriginalMap[0] = "==========================================================================\n";
  OriginalMap[1] = "|---------|-----------------|----------------|----|----------------------|\n";
  OriginalMap[2] = "| Toilet  |                 |                |----|                      |\n";
  OriginalMap[3] = "|         |    Chemistry    |                |----|    jail              |\n";
  OriginalMap[4] = "|---------|                 |       A1       |----|                      |\n";
  OriginalMap[5] = "|         |                 |-------  -------|----|--------   -----------|\n";
  OriginalMap[6] = "|  A6868  |-----    --------|      |  |           |                      |\n";
  OriginalMap[7] = "|               |   |              |  |             |                    |\n";
  OriginalMap[8] = "|----   -------/     |         , -      - ,        |  Security Office    |\n";
  OriginalMap[9] = "|                     |    , '               ' ,  |                      |\n";
  OriginalMap[10] = "|                     |  ,                       ,  |-------    ---------|\n";
  OriginalMap[11] = "|                     | ,                         ,         |   |        |\n";
  OriginalMap[12] = "|        Biolab       ===                         ==========    |        |\n";
  OriginalMap[13] = "|                     ===         Lobby           ===============        |\n";
  OriginalMap[14] = "|                   -/ ,                           ,                     |\n";
  OriginalMap[15] = "|                 -/    ,                         ,                      |\n";
  OriginalMap[16] = "|             ---/        ,                       ,                      |\n";
  OriginalMap[17] = "|------------/             ,                   , '                       |\n";
  OriginalMap[18] = "|                            '  , -      -   '                           |\n";
  OriginalMap[19] = "|                                  |  |                                  |\n";
  OriginalMap[20] = "|                                  |  |                                  |\n";
  OriginalMap[21] = "|-------------------|        |-----    -----|            /---------------|\n";
  OriginalMap[22] = "|                   |        |              |           /                |\n";
  OriginalMap[23] = "|     Canteen       |        |              |          |                 |\n";
  OriginalMap[24] = "|                   ==========              ===========      Up Stairs   |\n";
  OriginalMap[25] = "|                   ==========   Entrance   ===========                  |\n";
  OriginalMap[26] = "|                   |        |              |          |                 |\n";
  OriginalMap[27] = "|                   |        |              |          |                 |\n";
  OriginalMap[28] = "|-------------------|        |-----    -----|            |---------------|\n";
  OriginalMap[29] = "==========================================================================\n";

  for ( int i = 0; i < 30; i++ )
    cout << OriginalMap[i];

}
int main(){
  Map_Respawn_Display();
  Map_Lab_Display("D6");
  return 0;
}
