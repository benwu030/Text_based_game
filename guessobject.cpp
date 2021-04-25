//Program Description: This is a mini game GuessObject designed to add some fun during our RPG game, player needs to win this game in order to unlock entry, get items and etc.
//An image of an object will be showed and you have to type the name of the object correctly
#include <iostream>
#include <iomanip>
using namespace std;

bool guessObject(int a){
  string input, answer;
  int count = 0;
  if (a == 0){
    answer = "Car";
    cout << "        _______" << endl;
    cout << "       //  ||\\ \\" << endl;
    cout << " _____//___||_\\ \\___" << endl;
    cout << " )  _          _    \\" << endl;
    cout << " |_/ \\________/ \\___|" << endl;
    cout << "___\\_/________\\_/______" << endl;
  }
  else if (a == 1){
    answer = "Keyboard";
    cout << " _____________________________________________________________________" << endl;
    cout << "|                                                                     |" << endl;
    cout << "| [_]   [_][_][_][_] [_][_][_][_] [_][_][_][_] [_][_][_] [_][_][_][_] |" << endl;
    cout << "|                                         ___                         |" << endl;
    cout << "| [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][___] [_][_][_] [_][_][_][_] |" << endl;
    cout << "| [__][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][  | [_][_][_] [_][_][_][ | |" << endl;
    cout << "| [___][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][_|           [_][_][_][_| |" << endl;
    cout << "| [_][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][______]    [_]    [_][_][_][ | |" << endl;
    cout << "| [__][_][__][_____________________][__][_][_] [_][_][_] [____][_][_| |" << endl;
    cout << "|_____________________________________________________________________|" << endl;
    cout << "" << endl;
  }
  else if (a == 2){
    answer = "Turtle";
    cout << "               __" << endl;
    cout << "    .,-;-;-,. /'_\\" << endl;
    cout << "  _/_/_/_|_\\_\\) /" << endl;
    cout << "'-<_><_><_><_>=/\\" << endl;
    cout << "  `/_/====/_/-'\\_\\" << endl;
    cout << "   \"\"     \"\"    \"\"" << endl;
  }
  else if (a == 3){
    answer = "Pikachu";
    cout << "`;-.          ___," << endl;
    cout << "  `.`\\_...._/`.-\"`" << endl;
    cout << "    \\        /      ," << endl;
    cout << "    /()   () \\    .' `-." << endl;
    cout << "   |)  .    ()\\  /   _.'" << endl;
    cout << "   \\  -'-     ,; '. <" << endl;
    cout << "    ;.__     ,;|   > \\" << endl;
    cout << "   / ,    / ,  |.-'.-'" << endl;
    cout << "  (_/    (_/ ,;|.<`" << endl;
    cout << "    \\    ,     ;-`" << endl;
    cout << "     >   \\    /" << endl;
    cout << "    (_,-'`> .'" << endl;
    cout << "         (_,'" << endl;
  }
  else if (a == 4){
    answer = "Pistol";
    cout << " +--^----------,--------,-----,--------^-," << endl;
    cout << " | |||||||||   `--------'     |          O" << endl;
    cout << " `+---------------------------^----------|" << endl;
    cout << "   `\\_,---------,---------,--------------'" << endl;
    cout << "     / XXXXXX /'|       /'" << endl;
    cout << "    / XXXXXX /  `\\    /'" << endl;
    cout << "   / XXXXXX /`-------'" << endl;
    cout << "  / XXXXXX /" << endl;
    cout << " / XXXXXX /" << endl;
    cout << "(________(   " << endl;
  }
  cout << endl;
  cout << "Guess what is this object?" << endl;
  cin >> input;
  for (int i = 0; i < answer.length(); i++){
    if (tolower(input[i]) == tolower(answer[i])){
      count++;
    }
  }
  if (count == answer.length()){
    cout << "Correct!" << endl;
    return true;
  }
  else{
    cout << "Wrong!" << endl;
    return false;
  }
}
/*int main(){
  srand(time(NULL));
  int random = rand() % 5;
  guessObject(random);
}*/
