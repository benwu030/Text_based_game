#include <iostream>
#include <iomanip>
#include "ItemAndMonster.h"
using namespace std;

void displayCharacters(int a, Monster p){
  string chris[50];
  chris[0] =  "         ________             ";
  chris[1] =  "        /        \\            ";
  chris[2] =  "     __/       (o)\\__         ";
  chris[3] =  "    /     ______\\\\   \\        ";
  chris[4] =  "    |____/__  __\\____|        ";
  chris[5] =  "       [  --~~--  ]           ";
  chris[6] =  "        |(  L   )|            ";
  chris[7] =  "  ___----\\  __  /----___      ";
  chris[8] =  " /   |  < \\____/ >   |   \\    ";
  chris[9] =  "/    |   < \\--/ >    |    \\   ";
  chris[10] = "||||||    \\ \\/ /     ||||||   ";
  chris[11] = "|          \\  /   o       |   ";
  chris[12] = "|     |     \\/   === |    |   ";
  chris[13] = "|     |      |o  ||| |    |   ";
  chris[14] = "|     \\______|   +#* |    |   ";
  chris[15] = "|            |o      |    |   ";
  chris[16] = " \\           |      /     /   ";
  chris[17] = " |\\__________|o    /     /    ";
  chris[18] = " |           |    /     /     ";
  chris[19] = "                              ";
  chris[20] = "                              ";
  chris[21] = "                              ";
  chris[22] = "                              ";
  chris[23] = "                              ";
  chris[24] = "                              ";
  chris[25] = "                              ";
  chris[26] = "                              ";
  chris[27] = "                              ";
  chris[28] = "                              ";
  chris[29] = "                              ";
  chris[30] = "                              ";
  chris[31] = "                              ";
  chris[32] = "                              ";
  chris[33] = "                              ";
  chris[34] = "                              ";
  chris[35] = "                              ";



  string villain[5][50];
  villain[0][0] =  "            /)   /)";
  villain[0][1] =  "           /)   /)";
  villain[0][2] =  "          ( )__( )";
  villain[0][3] =  "          ,=`  `=.";
  villain[0][4] =  "         _() ()  \\\\";
  villain[0][5] =  "        (_`-      )\\";
  villain[0][6] =  "         {{  }}  / )";
  villain[0][7] =  "        _}/__\\{_/ /";
  villain[0][8] =  "       xxx     oooo\\/\\";
  villain[0][9] =  "      xxxx     oooo/  \\_";
  villain[0][10] = "     /xxxx     oooo\\  | \\";
  villain[0][11] = "    / xxxx     oooo |    \\ <=shield";
  villain[0][12] = "    | xxxx     oooo |    |";
  villain[0][13] = "    \\  xxx     oooo/   o /";
  villain[0][14] = "     | mmmmmmmmmmmm| |  /";
  villain[0][15] = " |\\_/              \\_/>/ __";
  villain[0][16] = " \\___/|     ___     / /_/ /";
  villain[0][17] = "      |      |     |     /";
  villain[0][18] = "saffy+|______|_____|\\___/";
  villain[0][19] = "  dew  |   |  |   |";
  villain[0][20] = "       |   |  |   |";
  villain[0][21] = "       ( ) {  ( ) |";
  villain[0][22] = "       |   \\  |   \\";
  villain[0][23] = "       |   /  |   /";
  villain[0][24] = "  ,=.__|_ /  .=._|";
  villain[0][25] = "  \\______]  (___)]";

  villain[1][0] = "                 ,#####,";
  villain[1][1] = "                 #_   _#";
  villain[1][2] = "                 |a` `a|";
  villain[1][3] = "                 |  u  |";
  villain[1][4] = "                 \\  =  /";
  villain[1][5] = "                 |\\___/|";
  villain[1][6] = "        ___ ____/:     :\\____ ___";
  villain[1][7] = "      .'   `.-===-\\   /-===-.`   '.";
  villain[1][8] = "     /      .-\"\"\"\"\"-.-\"\"\"\"\"-.      \\";
  villain[1][9] = "    /'             =:=             '\\";
  villain[1][10] = "  .'  ' .:    o   -=:=-   o    :. '  `.";
  villain[1][11] = "  (.'   /'. '-.....-'-.....-' .'\\   '.)";
  villain[1][12] = "  /' ._/   \".     --:--     .\"   \\_. '\\";
  villain[1][13] = " |  .'|      \".  ---:---  .\"      |'.  |";
  villain[1][14] = " |  : |       |  ---:---  |       | :  |";
  villain[1][15] = "  \\ : |       |_____._____|       | : /";
  villain[1][16] = "  /   (       |----|------|       )   \\";
  villain[1][17] = " /... .|      |    |      |      |. ...\\";
  villain[1][18] = "|::::/'' jgs /     |       \\     ''\\::::|";
  villain[1][19] = "'\"\"\"\"       /'    .L_      `\\       \"\"\"\"'";
  villain[1][20] = "           /'-.,__/` `\\__..-'\\";
  // villain[1][21] = "          ;      /     \\      ;";
  // villain[1][22] = "          :     /       \\     |";
  // villain[1][23] = "          |    /         \\.   |";
  // villain[1][24] = "          |`../           |  ,/";
  // villain[1][25] = "          ( _ )           |  _)";
  // villain[1][26] = "          |   |           |   |";
  // villain[1][27] = "          |___|           \\___|";
  // villain[1][28] = "          :===|            |==|";
  // villain[1][29] = "           \\  /            |__|";
  // villain[1][30] = "           /\\/\\           /\"\"\"`8.__";
  // villain[1][31] = "           |oo|           \\__.//___)";
  // villain[1][32] = "           |==|";
  // villain[1][33] = "           \\__/";

  villain[2][0] = "                 .,";
  villain[2][1] = "        .    ____/__,";
  villain[2][2] = "      .' \\  / \\==\\```";
  villain[2][3] = "     /    \\ 77 \\ |";
  villain[2][4] = "    /_.----\\\\__,-----.";
  villain[2][5] = "<--(\\_|_____<__|_____/";
  villain[2][6] = "    \\  ````/|   ``/```";
  villain[2][7] = "     `.   / |    I|";
  villain[2][8] = "       `./  |____I|";
  villain[2][9] = "            !!!!!!!";
  villain[2][10] = "            | | I |";
  villain[2][11] = "            | | I |";
  villain[2][12] = "            \\ \\ I |";
  villain[2][13] = "            | | I |";
  villain[2][14] = "           _|_|_I_|";
  villain[2][15] = "          /__/____|";

  villain[3][0] = "               ";
  villain[3][1] = "   \\\\\\|||///";
  villain[3][2] = " .  ======= ";
  villain[3][3] = "/ \\| O   O |";
  villain[3][4] = "\\ / \\`___'/ ";
  villain[3][5] = " #   _| |_";
  villain[3][6] = "(#) (     )  ";
  villain[3][7] = " #\\//|* *|\\\\ ";
  villain[3][8] = " #\\/(  *  )/   ";
  villain[3][9] = " #   =====  ";
  villain[3][10] = " #   ( U ) ";
  villain[3][11] = " #   || ||";
  villain[3][12] = ".#---'| |`----.";
  villain[3][13] = "`#----' `-----'";
  if (a == 0){
    for (int i = 0; i < 26; i++)
      cout << chris[i] << "          " << villain[a][i] << endl;

    }
    else if (a == 1){
      for (int i = 0; i < 21; i++)
        cout << chris[i] << "          "<<  villain[a][i] << endl;
      }
      else if (a == 2){
        for (int i = 0; i < 19; i++)
          cout << chris[i] << "          "<<  villain[a][i] << endl;
        }
        else if (a == 3){
          for (int i = 0; i < 19; i++)
            cout << chris[i] << "          " <<  villain[a][i] << endl;
          }
  cout<<endl;
  cout << "Health: " << Chris.health << setw(38) << "Health: " << p.health << endl;
  cout << "Armour: " << Chris.armour << setw(39) << "Armour: " << p.armour << endl;
  cout << "Damage: " << Chris.damage << setw(39) << "Damage: " << p.damage << endl;
  cout << "Speed: " << Chris.speed << setw(39) << "Speed: " << p.speed << endl;
  // if (a == 0){
  //   for (int i = 0; i < 26; i++){
  //     cout << chris[i] << "          " << villain[a][i] << endl;
  //   }
  // cout << "The enemy you have encountered is Big Boss!!!" << endl;
  // cout << "Health: " << Chris.health << setw(38) << "Health: " << zero.health << endl;
  // cout << "Armour: " << Chris.armour << setw(39) << "Armour: " << zero.armour << endl;
  // cout << "Damage: " << Chris.damage << setw(39) << "Damage: " << zero.damage << endl;
  // cout << "Speed: " << Chris.speed << setw(39) << "Speed: " << zero.speed << endl;
  // }
  // else if (a == 1){
  //   for (int i = 0; i < 34; i++){
  //     cout << chris[i] << "          "<<  villain[a][i] << endl;
  //   }
  // cout << "The enemy you have encountered is Mister Muscles!!!" << endl;
  // cout << "Health: " << Chris.health << setw(38) << "Health: " << one.health << endl;
  // cout << "Armour: " << Chris.armour << setw(39) << "Armour: " << one.armour << endl;
  // cout << "Damage: " << Chris.damage << setw(39) << "Damage: " << one.damage << endl;
  // cout << "Speed: " << Chris.speed << setw(39) << "Speed: " << one.speed << endl;
  // }
  // else if (a == 2){
  //   for (int i = 0; i < 19; i++){
  //     cout << chris[i] << "          "<<  villain[a][i] << endl;
  //   }
  // cout << "The enemy you have encountered is Mister Hawkeye!!!" << endl;
  // cout << "Health: " << Chris.health << setw(38) << "Health: " << two.health << endl;
  // cout << "Armour: " << Chris.armour << setw(39) << "Armour: " << two.armour << endl;
  // cout << "Damage: " << Chris.damage << setw(39) << "Damage: " << two.damage << endl;
  // cout << "Speed: " << Chris.speed << setw(39) << "Speed: " << two.speed << endl;
  // }
  // else if (a == 3){
  //   for (int i = 0; i < 19; i++){
  //     cout << chris[i] << "          " <<  villain[a][i] << endl;
  //   }
  // cout << "The enemy you have encountered is Mister Guard!!!" << endl;
  // cout << "Health: " << Chris.health << setw(38) << "Health: " << three.health << endl;
  // cout << "Armour: " << Chris.armour << setw(39) << "Armour: " << three.armour << endl;
  // cout << "Damage: " << Chris.damage << setw(39) << "Damage: " << three.damage << endl;
  // cout << "Speed: " << Chris.speed << setw(39) << "Speed: " << three.speed << endl;
  // }
}

void battleStats(){
  int turn = 0;
  string action;
  Monster p;
  srand(1);
  int villainIndex = rand() % 5;
  if (villainIndex == 0){
    p = zero;
  }
  else if (villainIndex == 1){
    p = one;
  }
  else if (villainIndex == 2){
    p = two;
  }
  else if (villainIndex == 3){
    p = three;
  }
  cout << endl;
  system("CLS");
  _sleep(1000);
  while (Chris.health > 0 && p.health > 0){
    _sleep(500);
    system("CLS");

    displayCharacters(villainIndex, p);

    cout<<endl;
    if (turn % 2 == 0){

      cout << "It's your turn. Please choose to attack/run: ";
      cin >> action;
      if (action == "attack"){
        if (p.armour < Chris.damage){
          p.health -= Chris.damage - p.armour;
        }

        turn++;
        cout << endl;
      }
      else if (action == "run"){
        if (Chris.speed > p.speed){
          cout << "You have successfully escaped from " << p.name << "." << endl;
          break;
        }
        else{
          cout << "Your speed is insufficient for you to flee away from " << p.name << "!" << endl;
          turn++;
          cout << endl;
        }
      }
    }
    else{
      cout << "It's "<< p.name << "' turn to attack." << endl;
      if (Chris.armour < p.damage){
        Chris.health -= p.damage - Chris.armour;
      }
      cout << "Health: " << Chris.health << setw(38) << "Health: " << p.health << endl;
      cout << "Armour: " << Chris.armour << setw(39) << "Armour: " << p.armour << endl;
      cout << "Damage: " << Chris.damage << setw(39) << "Damage: " << p.damage << endl;
      cout << "Speed: " << Chris.speed << setw(39) << "Speed: " << p.speed << endl;
      turn++;
      cout << endl;
    }
  }
}

int main(){



  battleStats();
}
