#include <iostream>
#include "tictactoe.h"
#include "Map.h"
using namespace std;




int main(){
// TicTacToe(1);
  string Map[31];
  int option;
  Map_Respawn_Init(Map);
  Display_Lab_Map(Map);
  cout << "You are Chris, a former police. Your daughter Alexandra has been abducted by unknown. You have searched her for 2 years and now all clues pointed to this corp - BioReincarnation(Bior.) Alexandra is said to be imprisoned in a lab inside an obsolete building. You are standing in front of the main entrance of the building. " << endl;
  cout << "Type anything and press Enter to continue: ";
  cin >> new string;
  while (true){
    system("CLS");
    Map_Lab_Init(Map);
    Display_Lab_Map(Map);
    cout << "The asterisk (*) indicates your position." << endl;
    cout << "[0]: Move" << endl;
    cout << "[1]: Save and Exit" << endl;
    cin >> option;
    if (option == 0){

    }
  }
return 0;
}
