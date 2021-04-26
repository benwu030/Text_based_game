//Program Description: This program contains functions that are in charge of giving visual effects at some important changing scene
//Such as opening, victory, loss
#include<iostream>
#include <unistd.h>
#include<string>
#include <stdio.h>
#include "readfile.h"
#include "Map.h"
#include "ItemAndMonster.h"
using namespace std;

//This function is called out when the game starts to welcome player
void print_MainMenu(){


  cout<<"████████╗██╗  ██╗███████╗    ██╗      █████╗ ███████╗████████╗    ██╗  ██╗ ██████╗ ██████╗ ███████╗"<<endl;
  cout<<"╚══██╔══╝██║  ██║██╔════╝    ██║     ██╔══██╗██╔════╝╚══██╔══╝    ██║  ██║██╔═══██╗██╔══██╗██╔════╝"<<endl;
  cout<<"   ██║   ███████║█████╗      ██║     ███████║███████╗   ██║       ███████║██║   ██║██████╔╝█████╗"<<endl;
  cout<<"   ██║   ██╔══██║██╔══╝      ██║     ██╔══██║╚════██║   ██║       ██╔══██║██║   ██║██╔═══╝ ██╔══╝"<<endl;
  cout<<"   ██║   ██║  ██║███████╗    ███████╗██║  ██║███████║   ██║       ██║  ██║╚██████╔╝██║     ███████╗"<<endl;
  cout<<"   ╚═╝   ╚═╝  ╚═╝╚══════╝    ╚══════╝╚═╝  ╚═╝╚══════╝   ╚═╝       ╚═╝  ╚═╝ ╚═════╝ ╚═╝     ╚══════╝"<<endl<<endl;


  cout<<"                                          ***";

  cout<<"Main Menu";

  cout<<"***                                          "<<endl;
  cout<<"                                        1) Start A New Game                                        "<<endl;
  cout<<"                                        2) Resume Last Saving                                      "<<endl;
  cout<<"                                        3) HELP                                                    "<<endl;
  cout<<"                                        4) Exit                                                    "<<endl;
}

//This function is called out when the player wins the game and successfully rescue his daughter
void print_Victory(){





  cout << "░█████╗░░█████╗░███╗░░██╗░██████╗░██████╗░░█████╗░████████╗░██████╗██╗" << endl;
  cout << "██╔══██╗██╔══██╗████╗░██║██╔════╝░██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║" << endl;
  cout << "██║░░╚═╝██║░░██║██╔██╗██║██║░░██╗░██████╔╝███████║░░░██║░░░╚█████╗░██║" << endl;
  cout << "██║░░██╗██║░░██║██║╚████║██║░░╚██╗██╔══██╗██╔══██║░░░██║░░░░╚═══██╗╚═╝" << endl;
  cout << "╚█████╔╝╚█████╔╝██║░╚███║╚██████╔╝██║░░██║██║░░██║░░░██║░░░██████╔╝██╗" << endl;
  cout << "░╚════╝░░╚════╝░╚═╝░░╚══╝░╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═════╝░╚═╝" << endl;


  cout<<"You have successfully rescued your daugher!!!"<<endl;
}

//This function is called when the health of player is less than zero and the player dies
//Wich means the player has lost the game and failed to rescue his daughter
void print_Lose(){


  cout << "██╗░░░██╗░█████╗░██╗░░░██╗  ░█████╗░██████╗░███████╗  ██████╗░███████╗░█████╗░██████╗░██╗" << endl;
  cout << "╚██╗░██╔╝██╔══██╗██║░░░██║  ██╔══██╗██╔══██╗██╔════╝  ██╔══██╗██╔════╝██╔══██╗██╔══██╗██║" << endl;
  cout << "░╚████╔╝░██║░░██║██║░░░██║  ███████║██████╔╝█████╗░░  ██║░░██║█████╗░░███████║██║░░██║██║" << endl;
  cout << "░░╚██╔╝░░██║░░██║██║░░░██║  ██╔══██║██╔══██╗██╔══╝░░  ██║░░██║██╔══╝░░██╔══██║██║░░██║╚═╝" << endl;
  cout << "░░░██║░░░╚█████╔╝╚██████╔╝  ██║░░██║██║░░██║███████╗  ██████╔╝███████╗██║░░██║██████╔╝██╗" << endl;
  cout << "░░░╚═╝░░░░╚════╝░░╚═════╝░  ╚═╝░░╚═╝╚═╝░░╚═╝╚══════╝  ╚═════╝░╚══════╝╚═╝░░╚═╝╚═════╝░╚═╝" << endl;

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
    system("clear");

    //Story and Background Description
    cout << "===========================================================================\n";
    cout << "|                                        _[]_                             |\n";
    cout << "|                        _______________|[][]|____                        |\n";
    cout << "|                        |[][]|[][]|[][]|[][]|[][]|_____                  |\n";
    cout << "|                        |  /\\|/\\  |  /\\|  /\\|/\\  |_____\\                 |\n";
    cout << "|                        |[]|||||[]|[]|||[]|||||[]|[_]|||                 |\n";
    cout << "|  ======================================                                 |\n";
    cout << "|  -  -  -  -  -  -  -  -  -  -  -  -  -                                  |\n";
    cout << "|=========================================                                |\n";
    cout << "===========================================================================\n";
    cout << "===================================================================================================="<<endl;
    cout << "Story :"<<endl;
    cout << "You are "; cout << "Chris";  cout << ", a former police. Your daughter "; cout <<"Alexandra"; cout << " has been abducted by unknown." << endl;
    cout << "You have searched her for 2 years and now all clues pointed to this corp";cout << "- BioReincarnation(Bior.)" << endl;
    cout << "Alexandra is said to be imprisoned in a lab inside an obsolete building." << endl;
    cout << "You are standing in front of the main entrance of the building. " << endl;
    cout << "===================================================================================================="<<endl;
    cout.flush(); sleep(10);
    system("clear");
    Display_Lab_Map(Map);
    cout << "===================================================================================================="<<endl;
    cout << "This is the map of the building." << endl;
    cout << "You are at the \"Entrance\" now."<< endl;
     cout << "The door is locked right after you enter the Entrance" << endl;
    cout << "You have to play a very very very difficult TicTaeToe game to open the door." << endl;
    cout << "You might find something useful to"; cout << " lower the difficulty";cout << "of the tictaetoe but I can't guarantee you." << endl;
    cout << "Tips: Items like potions and grenades are consumable and can be actively used by you." << endl;
    cout << "While Equipments like armour and guns are equiped by you immediately after you have gotten it" << endl;
    cout << "and it will increase your attributes automatically and immediately."<< endl;
    cout << "Your game progress is automatically saved if you have successfully defeated a villain in a new location :)" << endl;
    cout << "===================================================================================================="<<endl;
    cout.flush(); sleep(10);

    system("clear");
      break;
    case '2':           //Case 2 is to load the player's last saved game progress/profile so that player can continue his unfinished gameplay
      cout << "Resume from last save" << endl;
      load_Map(Map);
      load_MainCharacter(Chris);
      SetItemAndEquiment(Chris);
      cout << "Game loaded" << endl;
      usleep(1000);
      system("clear");
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
