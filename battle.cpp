#include <iostream>
#include <iomanip>
#include "ItemAndMonster.h"
#include "LinkedList.h"
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
  cout << endl << "Entity: " << Chris.name << setw(36) << "Entity: " << p.name << endl;
  cout << "Health: " << Chris.health << setw(39) << "Health: " << p.health << endl;
  cout << "Armour: " << Chris.armour << setw(39) << "Armour: " << p.armour << endl;
  cout << "Damage: " << Chris.damage << setw(39) << "Damage: " << p.damage << endl;
  cout << "Speed: " << Chris.speed << setw(40) << "Speed: " << p.speed << endl;
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

  int damage_dealed;
  while (Chris.health > 0 && p.health > 0){

    system("CLS");

    displayCharacters(villainIndex, p);

    cout<<endl;
    if (turn % 2 == 0){

      cout << "It's your turn. Please choose to attack/run/items: ";
      cin >> action;
      if (action == "attack"){
        damage_dealed = Chris.damage - p.armour;

        if (damage_dealed > 0)
          p.health -= damage_dealed;
        else
          damage_dealed = 0;

        cout << "You damage "<<p.name<<" by "<< damage_dealed<<" HP"<<endl;
        turn++;
        _sleep(2000);

      }
      else if (action == "run"){
        if (Chris.speed > p.speed){
          cout << "You have successfully escaped from " << p.name << "." << endl;
          break;
          _sleep(2000);
        }
        else{
          cout << "Your speed is insufficient for you to flee away from " << p.name << "!" << endl;
          turn++;
          cout << endl;
          _sleep(2000);
        }
      }
    else if (action == "items"){
    int choice;
    if (isEmpty(Chris.Chris_Item)){


      print_list(Chris.Chris_Item);
      _sleep(2000);
    }
    else{
      print_list(Chris.Chris_Item);
      cin >> choice;
    }
    }

    }
    else{
      system("CLS");
      damage_dealed = p.damage - Chris.armour;

      if (damage_dealed > 0)
        Chris.health -= damage_dealed;
      else
        damage_dealed = 0;

      displayCharacters(villainIndex, p);
      cout << endl << "It's "<< p.name << "' turn to attack." << endl;
      cout << "You have been damaged by "<<damage_dealed<<" HP"<<endl;
      _sleep(2000);
      turn++;
      cout << endl;

    }
  }
}

int main(){



  battleStats();
}
