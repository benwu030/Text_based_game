#include<iostream>
#include<windows.h>
#include<string>
#include "readfile.h"

using namespace std;
void SetColor(int value){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}
//This function is called out when the game starts to welcome player
void print_MainMenu(){

  SetColor(4);
  cout<<"████████╗██╗  ██╗███████╗    ██╗      █████╗ ███████╗████████╗    ██╗  ██╗ ██████╗ ██████╗ ███████╗"<<endl;
  cout<<"╚══██╔══╝██║  ██║██╔════╝    ██║     ██╔══██╗██╔════╝╚══██╔══╝    ██║  ██║██╔═══██╗██╔══██╗██╔════╝"<<endl;
  cout<<"   ██║   ███████║█████╗      ██║     ███████║███████╗   ██║       ███████║██║   ██║██████╔╝█████╗"<<endl;
  cout<<"   ██║   ██╔══██║██╔══╝      ██║     ██╔══██║╚════██║   ██║       ██╔══██║██║   ██║██╔═══╝ ██╔══╝"<<endl;
  cout<<"   ██║   ██║  ██║███████╗    ███████╗██║  ██║███████║   ██║       ██║  ██║╚██████╔╝██║     ███████╗"<<endl;
  cout<<"   ╚═╝   ╚═╝  ╚═╝╚══════╝    ╚══════╝╚═╝  ╚═╝╚══════╝   ╚═╝       ╚═╝  ╚═╝ ╚═════╝ ╚═╝     ╚══════╝"<<endl<<endl;
  SetColor(7);

  cout<<"                                          ***";
  SetColor(12);
  cout<<"Main Menu";
  SetColor(7);
  cout<<"***                                          "<<endl;
  cout<<"                                        1) Start A New Game                                        "<<endl;
  cout<<"                                        2) Resume Last Saving                                      "<<endl;
  cout<<"                                        3) HELP                                                    "<<endl;
  cout<<"                                        4) Exit                                                    "<<endl;
}

bool MainMenu_Choice(string choice,string Map[],Main_character Chris){
  if (choice.length()!=1){
    cout << "Invalid input, please input again" << endl;
    return false;
  }

  else{
    char option = choice[0];
    switch(option) {
    case '1':
      Create_NewMap(Map);
      Create_NewChararcter(Chris);
      break;
    case '2':
      cout << "Resume from last save" << endl;
      break;
    case '3':
      cout << "help" << endl;
      break;
    case '4':
      cout << "exit" << endl;
      break;
    default:
      cout << "Invalid input, please input again" << endl;
      return false;
    }
      return true;
  }
}
int main(){
  print_MainMenu();
  Main_character Chris;
  string Map[31];
  string choice;

  bool flag = false;
  while (!flag){
    getline(cin,choice);
    flag = MainMenu_Choice(choice,Map,Chris);
  }
return 0;

}
