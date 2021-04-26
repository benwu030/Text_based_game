//Program Description: This file contains allfunctions related to battle stage
#include <unistd.h>
#include <iostream>
#include <iomanip>
#include <ctime>
#include "ItemAndMonster.h"
#include "readfile.h"
#include "battle.h"
using namespace std;

//This function is to display characters' images and appearances during combat stage
//The parameter p is taken randomly based on the difficulty we set
void displayCharacters(int a, Monster p,Main_character Chris){
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

  villain[4][0] = "          (o)    (o)";
  villain[4][1] = "            \\    /";
  villain[4][2] = "   /\\        \\  /";
  villain[4][3] = "   ||        ----";
  villain[4][4] = "   ||       /(o) \\";
  villain[4][5] = "   ||      (  <   )";
  villain[4][6] = "   ||       \\ -- /";
  villain[4][7] = "/|_||_|\\__(--====--)";
  villain[4][8] = "  (|_______\\======/\\ \\[[/";
  villain[4][9] = "   ||        (--) \\ \\/ /";
  villain[4][10] = "             /  \\  \\_-/";
  villain[4][11] = "            |====|";
  villain[4][12] = "           (  /\\  ) ";
  villain[4][13] = "           |  )(  |";
  villain[4][14] = "           [  ][  ]";
  villain[4][15] = "           _||  ||_";
  villain[4][16] = "          (   ][   )";
  villain[4][17] = " ";
  villain[4][18] = " ";
  villain[4][19] = " ";
  villain[4][20] = " ";

  if (a == 0){
    for (int i = 0; i < 21; i++)
      cout << chris[i] << "     ||    " << villain[a][i] << endl;

  }
  else if (a == 1){
    for (int i = 0; i < 21; i++)
      cout << chris[i] << "     ||    "<<  villain[a][i] << endl;
  }
  else if (a == 2){
    for (int i = 0; i < 21; i++)
      cout << chris[i] << "    ||     "<<  villain[a][i] << endl;
  }
  else if (a == 3){
    for (int i = 0; i < 19; i++)
      cout << chris[i] << "    ||     " <<  villain[a][i] << endl;
  }
  else if (a == 4){
    for (int i = 0; i < 19; i++)
      cout << chris[i] << "    ||     " <<  villain[a][i] << endl;
  }
  cout << endl << "Entity: " << Chris.name << setw(36) << "Entity: " << p.name << endl;
  cout << "Health: " << Chris.health << setw(39) << "Health: " << p.health << endl;
  cout << "Armour: " << Chris.armour << setw(39) << "Armour: " << p.armour << endl;
  cout << "Damage: " << Chris.damage << setw(39) << "Damage: " << p.damage << endl;
  cout << "Speed: " << Chris.speed << setw(40) << "Speed: " << p.speed << endl;
}

//Summoning this function means that random monster appears and leads us to battle stage
//a = 2: only random easy villain will appear
//a = 1: random medium villain might appear
//a = 0: boss will appear
int battleStats(int a,Main_character &Chris){
  int turn = 0;
  string action;
  Monster p;
  srand(time(NULL));
  int villainIndex;
  if (a == 2){
    villainIndex = rand() % 2 + 3;
  }
  else if (a == 1){
    villainIndex = rand() % 4 + 1;
  }
  else if (a == 0){
    villainIndex = 0;
  }
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
  else if (villainIndex == 4){
    p = four;
  }


  int damage_dealed;
  while (Chris.health > 0 && p.health > 0){

    system("clear");
    displayCharacters(villainIndex, p, Chris);

    cout<<endl;
    if (turn % 2 == 0){
      cout << "It's your turn. Please choose to attack/run/items: ";
      cin >> action;
      if (action == "a"){
        damage_dealed = Chris.damage - p.armour;
        if (damage_dealed > 0)
          p.health -= damage_dealed;
        else
          damage_dealed = 0;
        cout << "You damage "<<p.name<<" by "<< damage_dealed<<" HP"<<endl;
        turn++;
        usleep(2000);
      }
      else if (action == "r"){
        if (Chris.speed > p.speed){
          cout << "You have successfully escaped from " << p.name << "." << endl;
          usleep(2000);
          return 2;
          break;
        }
        else{
          cout << "Your speed is insufficient for you to flee away from " << p.name << "!" << endl;
          turn++;
          cout << endl;
          usleep(2000);
        }
      }
      else if (action == "i"){
        int choice;
        if (Chris.Chris_Item.size() == 0){
          cout << "You don't have any items yet";
          usleep(2000);
        }
        else{
          print_item(Chris.Chris_Item);
          cout << endl;
          cout << "[99]: I don't feel like using any item right now." << endl;

          cin >> choice;
          if (choice != 99 and choice < Chris.Chris_Item.size()){
            if (Chris.Chris_Item[choice].type == 1){
              Chris.health += Chris.Chris_Item[choice].value;
              cout << "You have been healed for " << Chris.Chris_Item[choice].value << "HP" << endl;
              usleep(1500);
              Chris.Chris_Item.erase(Chris.Chris_Item.begin()+choice);
            }
            else if(Chris.Chris_Item[choice].type == 2){
              p.health -= Chris.Chris_Item[choice].value;
              cout << "You have caused " << Chris.Chris_Item[choice].value << "damage to enemy" << endl;
              usleep(1500);
              Chris.Chris_Item.erase(Chris.Chris_Item.begin()+choice);
            }
          }
          else {
            cout << "This item cannot be used here" << endl;
          }
        }
      }
    }
    else{
      system("clear");
      damage_dealed = p.damage - Chris.armour;
      if (damage_dealed > 0)
        Chris.health -= damage_dealed;
      else
        damage_dealed = 0;
      displayCharacters(villainIndex, p, Chris);
      cout << endl << "It's "<< p.name << "' turn to attack." << endl;
      cout << "You have been damaged by "<<damage_dealed<<" HP"<<endl;
      usleep(2000);
      turn++;
      cout << endl;
    }
  }
  if (Chris.health <= 0){
    return 0;
  }
  else{
    return 1;
  }
}
