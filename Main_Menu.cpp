//Program Description: This program contains functions that are in charge of giving visual effects at some important changing scene
//Such as opening, victory, loss
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

//This function is called out when the player wins the game and successfully rescue his daughter
void print_Victory(){

  SetColor(14);



  cout << "░█████╗░░█████╗░███╗░░██╗░██████╗░██████╗░░█████╗░████████╗░██████╗██╗" << endl;
  cout << "██╔══██╗██╔══██╗████╗░██║██╔════╝░██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║" << endl;
  cout << "██║░░╚═╝██║░░██║██╔██╗██║██║░░██╗░██████╔╝███████║░░░██║░░░╚█████╗░██║" << endl;
  cout << "██║░░██╗██║░░██║██║╚████║██║░░╚██╗██╔══██╗██╔══██║░░░██║░░░░╚═══██╗╚═╝" << endl;
  cout << "╚█████╔╝╚█████╔╝██║░╚███║╚██████╔╝██║░░██║██║░░██║░░░██║░░░██████╔╝██╗" << endl;
  cout << "░╚════╝░░╚════╝░╚═╝░░╚══╝░╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═════╝░╚═╝" << endl;
  SetColor(7);

  cout<<"You have successfully rescued your daugher!!!"<<endl;
}

//This function is called when the health of player is less than zero and the player dies
//Wich means the player has lost the game and failed to rescue his daughter
void print_Lose(){
  SetColor(4);

  cout << "██╗░░░██╗░█████╗░██╗░░░██╗  ░█████╗░██████╗░███████╗  ██████╗░███████╗░█████╗░██████╗░██╗" << endl;
  cout << "╚██╗░██╔╝██╔══██╗██║░░░██║  ██╔══██╗██╔══██╗██╔════╝  ██╔══██╗██╔════╝██╔══██╗██╔══██╗██║" << endl;
  cout << "░╚████╔╝░██║░░██║██║░░░██║  ███████║██████╔╝█████╗░░  ██║░░██║█████╗░░███████║██║░░██║██║" << endl;
  cout << "░░╚██╔╝░░██║░░██║██║░░░██║  ██╔══██║██╔══██╗██╔══╝░░  ██║░░██║██╔══╝░░██╔══██║██║░░██║╚═╝" << endl;
  cout << "░░░██║░░░╚█████╔╝╚██████╔╝  ██║░░██║██║░░██║███████╗  ██████╔╝███████╗██║░░██║██████╔╝██╗" << endl;
  cout << "░░░╚═╝░░░░╚════╝░░╚═════╝░  ╚═╝░░╚═╝╚═╝░░╚═╝╚══════╝  ╚═════╝░╚══════╝╚═╝░░╚═╝╚═════╝░╚═╝" << endl;
  SetColor(7);
}

//This function is to take input from player at the Main Menu page
bool MainMenu_Choice(string choice,string Map[],Main_character &Chris){
  if (choice.length()!=1){
    cout << "Invalid input, please input again" << endl;
    return false;
  }

  else{
    char option = choice[0];
    switch(option) {
    case '1':         //Case 1 is for player first time playing this game to create a new game
    Create_NewMap(Map);
    Create_NewChararcter(Chris);
    Current_At_Entrance(Map);
    system("CLS");

    //Story and Background Description
    cout << "===================================================================================================="<<endl;
    cout << "Story :"<<endl;
    cout << "You are ";SetColor(12); cout << "Chris"; SetColor(7); cout << ", a former police. Your daughter "; SetColor(12);cout <<"Alexandra"; SetColor(7);cout << " has been abducted by unknown." << endl;
    cout << "You have searched her for 2 years and now all clues pointed to this corp"; SetColor(12); cout << "- BioReincarnation(Bior.)" << endl;SetColor(7);
    cout << "Alexandra is said to be imprisoned in a lab inside an obsolete building." << endl;
    cout << "You are standing in front of the main entrance of the building. " << endl;
    cout << "===================================================================================================="<<endl;
    system("pause");
    system("CLS");
    Display_Lab_Map(Map);
    cout << "===================================================================================================="<<endl;
    cout << "This is the map of the building." << endl;
    cout << "You are at the \"Entrance\" now."<< endl;
    SetColor(12); cout << "The door is locked right after you enter the Entrance" << endl;
    SetColor(7);cout << "You have to play a very very very difficult TicTaeToe game to open the door." << endl;
    cout << "You might find something useful to"; SetColor(12); cout << " lower the difficulty";SetColor(7); cout << "of the tictaetoe but I can't guarantee you." << endl;
    cout << "Tips: Items like potions and grenades are consumable and can be actively used by you." << endl;
    cout << "While Equipments like armour and guns are equiped by you immediately after you have gotten it" << endl;
    cout << "and it will increase your attributes automatically and immediately."<< endl;
    cout << "Your game progress is automatically saved if you have successfully defeated a villain in a new location :)" << endl;
    cout << "===================================================================================================="<<endl;
    system("pause");

    system("CLS");
      break;
    case '2':           //Case 2 is to load the player's last saved game progress/profile so that player can continue his unfinished gameplay
      cout << "Resume from last save" << endl;
      load_Map(Map);
      load_MainCharacter(Chris);
      SetItemAndEquiment(Chris);
      cout << "Game loaded" << endl;
      Sleep(1000);
      system("CLS");
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
/*int main(){
  print_Victory();
  print_Lose();
  Main_character Chris;
  string Map[31];
  string choice;

  bool flag = false;
  while (!flag){
    getline(cin,choice);
    flag = MainMenu_Choice(choice,Map,Chris);
  }
return 0;

}*/
