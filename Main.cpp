//This file contains the main function of our game
#include <iostream>
#include "tictactoe.h"
#include "Map.h"
#include "HomeMenu.cpp"
using namespace std;



int main(){
  string Map[31], current, next;
  int option, countEntrance = 1, countLobby = 0, countStairs = 0, countCanteen = 0, countBioLab = 0, countSecurityOffice = 0, countA1 = 0, countJail = 0, countChemistry = 0, countA6868 = 0, countToilet = 0;
  cout << "You are Chris, a former police. Your daughter Alexandra has been abducted by unknown. You have searched her for 2 years and now all clues pointed to this corp - BioReincarnation(Bior.) Alexandra is said to be imprisoned in a lab inside an obsolete building. You are standing in front of the main entrance of the building. " << endl;
  cout << "Type anything and press Enter to continue: ";
  cin.get();
  Display_Lab_Map(map);
  cout << "This is the map of the building." << endl;
  cout << "Type anything and press Enter to continue: ";
  cin.get();
  current = "entrance";
  Current_At_Entrance(map);
  while (true){
    system("CLS");
    print_HomeMenu();
    cin >> option;
    if (option == 1){
      cout << "Where do you want to go next?" << endl;
      cin >> next;
      if (current == "entrance"){
        while (true){
          if (next == "Canteen"){
            current = "canteen"
            Current_At_Canteen(map);
            if (countCanteen == 0)
              battleStats();
            break;
          }
          else if (next == "Stairs"){
            current = "stairs";
            Current_At_Stairs(map);
            if (countStairs == 0)
              battleStats();
            break;
          }
          else if (next == "Lobby"){
            current = "lobby";
            Current_At_Lobby(map);
            if (countLobby == 0)
              battleStats();
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            cin >> next;
          }
        }
      }
      else if (current == "canteen"){
        while (true){
          if (next == "Entrance"){
            current = "entrance";
            Current_At_Entrance(map);
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
          }
        }
      }
      else if (current == "stairs"){
        while (true){
          if (next == "Entrance"){
            current = "entrance";
            Current_At_Entrance(map);
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
          }
        }
      }
      else if (current == "lobby"){
        while (true){
          if (next == "BioLab"){
            current = "biolab"
            Current_At_BioLab(map);
            if (countBioLab == 0)
              battleStats();
            break;
          }
          else if (next == "Security Office"){
            current = "security office";
            Current_At_SecurityOffice(map);
            if (countSecurityOffice == 0)
              battleStats();
            break;
          }
          else if (next == "A1"){
            current = "A1";
            Current_At_A1(map);
            if (countA1 == 0)
              battleStats();
            break;
          }
          else if (next == "Entrance"){
            current = "entrance";
            Current_At_Entrance(map);
            if (countEntrance == 0)
              battleStats();
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            cin >> next;
          }
        }
      }
      else if (current == "biolab"){
        while (true){
          if (next == "A6868"){
            current = "A6868"
            Current_At_A6868(map);
            if (countA6868 == 0)
              battleStats();
            break;
          }
          else if (next == "Chemistry"){
            current = "chemistry";
            Current_At_Chemistry(map);
            if (countChemistry == 0)
              battleStats();
            break;
          }
          else if (next == "Lobby"){
            current = "lobby";
            Current_At_Lobby(map);
            if (countLobby == 0)
              battleStats();
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            cin >> next;
          }
        }
      }
      else if (current == "security office"){
        while (true){
          if (next == "Lobby"){
            current = "lobby";
            Current_At_Lobby(map);
            if (countLobby == 0)
              battleStats();
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            cin >> next;
          }
        }
      }
      else if (current == "A1"){
        while (true){
          if (next == "Lobby"){
            current = "lobby";
            Current_At_Lobby(map);
            if (countLobby == 0)
              battleStats();
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            cin >> next;
          }
        }
      }
      else if (current == "A6868"){
        while (true){
          if (next == "BioLab"){
            current = "biolab";
            Current_At_BioLab(map);
            if (countBioLab == 0)
              battleStats();
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            cin >> next;
          }
        }
      }
      else if (current == "Chemistry"){
        while (true){
          if (next == "BioLa"){
            current = "biolab";
            Current_At_BioLab(map);
            if (countBioLab == 0)
              battleStats();
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            cin >> next;
          }
        }
      }
    }

  }
return 0;
}
