#include <iostream>
using namespace std;

void displayVillain(int a){
    string villain[5][50];
    villain[0][0] = "         /)   /)\n";
    villain[0][1] = "         /)   /)\n";
    villain[0][2] = "        ( )__( )\n";
    villain[0][3] = "        ,=`  `=.\n";
    villain[0][4] = "      _() ()  \\\n";
    villain[0][5] = "      (_`-      )\\n";
    villain[0][6] = "       {{  }}  / )\n";
    villain[0][7] = "      _}/__\\{_/ /\n";
    villain[0][8] = "     xxx     oooo\\/\\n";
    villain[0][9] = "     xxxx     oooo/  \\_\n";
    villain[0][10] = "   /xxxx     oooo\\  | \\n";
    villain[0][11] = "  / xxxx     oooo |    \\ <=shield\n";
    villain[0][12] = "  | xxxx     oooo |    |\n";
    villain[0][13] = "  \\  xxx     oooo/   o /\n";
    villain[0][14] = "   | mmmmmmmmmmmm| |  /\n";
    villain[0][15] = "|\\_/              \\_/>/ __\n";
    villain[0][16] = "\\___/|     ___     / /_/ /\n";
    villain[0][17] = "     |      |     |     /\n";
    villain[0][18] = "     |______|_____|\\___/\n";
    villain[0][19] = "     |   |  |   |\n";
    villain[0][20] = "     |   |  |   |\n";
    villain[0][21] = "     ( ) {  ( ) |\n";
    villain[0][22] = "     |   \\  |   \\\n";
    villain[0][23] = "     |   /  |   /\n";
    villain[0][24] = ",=.__|_ /  .=._|\n";
    villain[0][25] = "  \\______]  (___)]\n";

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
    villain[1][21] = "          ;      /     \\      ;";
    villain[1][22] = "          :     /       \\     |";
    villain[1][23] = "          |    /         \\.   |";
    villain[1][24] = "          |`../           |  ,/";
    villain[1][25] = "          ( _ )           |  _)";
    villain[1][26] = "          |   |           |   |";
    villain[1][27] = "          |___|           \\___|";
    villain[1][28] = "          :===|            |==|";
    villain[1][29] = "           \\  /            |__|";
    villain[1][30] = "           /\\/\\           /\"\"\"`8.__";
    villain[1][31] = "           |oo|           \\__.//___)";
    villain[1][32] = "           |==|";
    villain[1][33] = "           \\__/";
    
    for (int i = 0; i < sizeof(villain[a]) / sizeof(*villain[a]); i++){
        cout << villain[a][i] << endl;

    }
}
int main(){
    displayVillain(1); 
}