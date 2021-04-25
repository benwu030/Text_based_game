#include<iostream>
#include<windows.h>
using namespace std;
void SetColor(int value){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}
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

void MainMenu_Choice()
int main(){
  print_MainMenu();
}
