//Program Description: This file contains the main function and it actually shows the whole logic flow of our game
#include <iostream>
#include "tictactoe.h"
#include "Map.h"
#include "HomeMenu.cpp"
#include "ItemAndMonster.h"
#include "battle.cpp"
#include "tictactoe.h"
#include "guessObject.cpp"
#include "readfile.h"
#include "savefile.h"
#include "Main_Menu.cpp"

using namespace std;

Main_character Chris;
string Map[31];


int main(){
  string current, next;
  int option, difficulty = 1, win = 0;
  print_MainMenu();

  string choice;
  bool flag = false;
  //This blockof codes is to take input from player to determine what choices the player has made in the Main Menu Page
  while (!flag){
    getline(cin,choice);
    flag = MainMenu_Choice(choice, Map, Chris);
  }


  int result;
  current = Chris.current;
  //Use of while loop to keep the game going unless the player has won the game or the player has died and the loop will break
  while (true){
    system("CLS");
    print_HomeMenu(Map,Chris);
    cin >> option;
    if (option == 1){         //Option 1 indicates the player wants to move to other locations
      cout << "Where do you want to go next?" << endl;
      cin >> next;
      if (current == "entrance"){
        while (true){
          if (next == "Canteen"){
            //Use of a variable Map_Count to determine whether the player moves to this location before or not
            //Battle will only be trigerred if player did not come to this location before
            if (Chris.Map_Count[next] == 0){
              cin.get();
              result = battleStats(2,Chris);
              //result = 1 means the player has won the battle against the villain
              //The location of Chris will be updated to this new location
              if (result == 1){
                Chris.Chris_Item.push_back(heal_1);
                cout << "You have obtained a "<< heal_1.name << ". It can heal you by "<< heal_1.value << "HP ."<< endl;
                Chris.Chris_Equiment.push_back(Armour_1);
                cout << "You have obtained an "<< Armour_1.name << ". It increases your armour by "<< Armour_1.armour << " and your speed by " << Armour_1.speed << "." << endl;
                system("pause");
                Chris.Map_Count[next] = 1;
                Chris.armour += Armour_1.armour;
                Chris.speed += Armour_1.speed;
                current = "canteen";
                Current_At_Canteen(Map);
                cout << "Auto Saving..." << endl;
                Chris.current = current;
                //Auto save function is provided :)
                SaveMap(Map);
                SaveCharacter(Chris);
                Sleep(1000);
                cout <<"Auto Save Completed!";
                Sleep(1000);

              }
              //results = 0 means the player has lost the battle against the villain and player is dead
              else if (result == 0){
                load_MainCharacter(Chris);
                SetItemAndEquiment(Chris);
                Chris.current = current;
                print_Lose();
                Sleep(1000);
                cout << "Loading from last saving..." << endl;
                Sleep(2000);
                break;
              }
              break;
              //If player chose to run, the result will be 2, which means the location of player is not updated and player is still at his previous location
            }

            //This block of code is run when the player has been to this location before
            //Hence battle will not be called out
            else{
              current = "canteen";
              Chris.current = current;
              Current_At_Canteen(Map);
              break;
            }
          }
          else if (next == "Stairs"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats(2,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_2);
                cout << "You have obtained a "<< heal_2.name << ". It can heal you by "<< heal_2.value << "HP ."<< endl;
                Chris.Chris_Equiment.push_back(Gun_1);
                cout << "You have obtained an "<< Gun_1.name << ". It increases your damage by "<< Gun_1.damage << " and your speed by " << Gun_1.speed << "." << endl;
                system("pause");
                Chris.Map_Count[next] = 1;
                Chris.damage += Gun_1.damage;
                Chris.speed += Gun_1.speed;
                current = "stairs";
                Current_At_Stairs(Map);
                cout << "Auto Saving..." <<endl;
                Chris.current = current;
                SaveMap(Map);
                SaveCharacter(Chris);
                Sleep(1000);
                cout <<"Auto Save Completed!";
                Sleep(1000);
              }
              else if (result == 0){
                load_MainCharacter(Chris);
                SetItemAndEquiment(Chris);
                Chris.current = current;
                print_Lose();
                Sleep(1000);
                cout << "Loading from last saving..." << endl;
                Sleep(2000);
                break;
              }
              break;
            }
            else{
              current = "stairs";
              Chris.current = current;
              Current_At_Stairs(Map);

              break;
            }
          }
          else if (next == "Lobby"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats(2,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_3);
                cout << "You have obtained a "<< heal_3.name << ". It can heal you by "<< heal_3.value << "HP ."<< endl;
                Chris.Chris_Equiment.push_back(Armour_2);
                cout << "You have obtained a "<< Armour_2.name << ". It increases your armour by "<< Armour_2.armour << " and your speed by " << Armour_2.speed << "." << endl;
                system("pause");
                Chris.Map_Count[next] = 1;
                Chris.armour += Armour_2.armour;
                Chris.speed += Armour_2.speed;
                current = "lobby";
                Current_At_Lobby(Map);
                cout << "Auto Saving..." <<endl;
                Chris.current = current;
                SaveMap(Map);
                SaveCharacter(Chris);
                Sleep(1000);
                cout <<"Auto Save Completed!";
                Sleep(1000);
              }
              else if (result == 0){
                load_MainCharacter(Chris);
                SetItemAndEquiment(Chris);
                Chris.current = current;
                print_Lose();
                Sleep(1000);
                cout << "Loading from last saving..." << endl;
                Sleep(2000);
                break;
              }
              break;
            }
            else{
              current = "lobby";
              Chris.current = current;
              Current_At_Lobby(Map);
              break;
            }
          }
          else if (next == "Outside"){
            cout << "You have to win a TicTacToe game in order to unlock the door and go outside." << endl;
            //if player wins the tictaetoe and he has Alexandra alongside, player can leave
            if (TicTacToe(difficulty)){
              for (int j = 0; j < Chris.Chris_Item.size(); j++){
                if (Chris.Chris_Item[j].name == "Alexandra"){
                  win++;
                }
              }

              break;
            }
            else{
              cout << "You did not win. Try again next time." << endl;
              Sleep(5000);
              break;
            }
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            Sleep(3000);
            break;
          }
        }
      }
      else if (current == "canteen"){
        while (true){
          if (next == "Entrance"){
            current = "entrance";
            Chris.current = current;
            Current_At_Entrance(Map);
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            Sleep(3000);
            break;
          }
        }
      }
      else if (current == "stairs"){
        while (true){
          if (next == "Entrance"){
            current = "entrance";
            Chris.current = current;
            Current_At_Entrance(Map);
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            Sleep(3000);
            break;
          }
        }
      }
      else if (current == "lobby"){
        while (true){
          if (next == "BioLab"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats(1,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_1);
                cout << "You have obtained a "<< heal_1.name << ". It can heal you by "<< heal_1.value << "HP ."<< endl;
                Chris.Chris_Equiment.push_back(Armour_4);
                cout << "You have obtained a "<< Armour_4.name << ". It increases your armour by "<< Armour_4.armour << " and your speed by " << Armour_2.speed << "." << endl;
                system("pause");
                Chris.Map_Count[next] = 1;
                Chris.armour += Armour_4.armour;
                Chris.speed += Armour_4.speed;
                current = "biolab";
                Current_At_BioLab(Map);
                cout << "Auto Saving..." <<endl;
                Chris.current = current;
                SaveMap(Map);
                SaveCharacter(Chris);
                Sleep(1000);
                cout <<"Auto Save Completed!";
                Sleep(1000);
              }
              else if (result == 0){
                load_MainCharacter(Chris);
                SetItemAndEquiment(Chris);
                print_Lose();
                Chris.current = current;
                Sleep(1000);
                cout << "Loading from last saving..." << endl;
                Sleep(2000);
                break;
              }
              break;
            }
            else{
              current = "biolab";
              Chris.current = current;
              Current_At_BioLab(Map);
              break;
            }
          }
          else if (next == "SecurityOffice"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats(0,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_2);
                cout << "You have obtained a "<< heal_2.name << ". It can heal you by "<< heal_2.value << "HP ."<< endl;
                Chris.Chris_Item.push_back(bomb);
                cout << "You have obtained a "<< bomb.name << endl;
                cout << "Your daughter is in the jail now. In order to save her you need to use the grenade to bomb the wall" << endl;
                system("pause");
                Chris.Map_Count[next] = 1;
                current = "securityoffice";
                Current_At_SecurityOffice(Map);
                cout << "Auto Saving..." <<endl;
                Chris.current = current;
                SaveMap(Map);
                SaveCharacter(Chris);
                Sleep(1000);
                cout <<"Auto Save Completed!";
                Sleep(1000);
              }
              else if (result == 0){
                load_MainCharacter(Chris);
                SetItemAndEquiment(Chris);
                print_Lose();
                Chris.current = current;
                Sleep(1000);
                cout << "Loading from last saving..." << endl;
                Sleep(2000);
                break;
              }
              break;
            }
            else{
              current = "securityoffice";
              Chris.current = current;
              Current_At_SecurityOffice(Map);
              break;
            }
          }
          else if (next == "A1"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats(1,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_2);
                cout << "You have obtained a "<< heal_2.name << ". It can heal you by "<< heal_2.value << "HP ."<< endl;
                Chris.Chris_Equiment.push_back(Gun_2);
                cout << "You have obtained a "<< Gun_2.name << ". It increases your damage by "<< Gun_2.damage << " and your speed by " << Gun_2.speed << "." << endl;
                system("pause");
                Chris.Map_Count[next] = 1;
                Chris.damage += Gun_2.damage;
                Chris.speed += Gun_2.speed;
                current = "A1";
                Current_At_A1(Map);
                cout << "Auto Saving..." <<endl;
                Chris.current = current;
                SaveMap(Map);
                SaveCharacter(Chris);
                Sleep(1000);
                cout <<"Auto Save Completed!";
                Sleep(1000);
              }
              else if (result == 0){
                load_MainCharacter(Chris);
                SetItemAndEquiment(Chris);
                print_Lose();
                Chris.current = current;
                Sleep(1000);
                cout << "Loading from last saving..." << endl;
                Sleep(2000);
                break;
              }
              break;
            }
            else{
              current = "A1";
              Chris.current = current;
              Current_At_A1(Map);
              break;
            }
          }
          else if (next == "Entrance"){
            current = "entrance";
            Chris.current = current;
            Current_At_Entrance(Map);
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            Sleep(3000);
            break;
          }
        }
      }
      else if (current == "biolab"){
        while (true){
          if (next == "A6868"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats(1,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_3);
                cout << "You have obtained a "<< heal_3.name << ". It can heal you by "<< heal_3.value << "HP ."<< endl;
                Chris.Chris_Equiment.push_back(Gun_3);
                cout << "You have obtained a "<< Gun_3.name << ". It increases your damage by "<< Gun_3.damage << " and your speed by " << Gun_3.speed << "." << endl;
                system("pause");
                Chris.Map_Count[next] = 1;
                Chris.damage += Gun_3.damage;
                Chris.speed += Gun_3.speed;
                current = "A6868";
                Current_At_A6868(Map);
                cout << "Auto Saving..." <<endl;
                Chris.current = current;
                SaveMap(Map);
                SaveCharacter(Chris);
                Sleep(1000);
                cout <<"Auto Save Completed!";
                Sleep(1000);
              }
              else if (result == 0){
                load_MainCharacter(Chris);
                SetItemAndEquiment(Chris);
                print_Lose();
                Chris.current = current;
                Sleep(1000);
                cout << "Loading from last saving..." << endl;
                Sleep(2000);
                break;
              }
              break;
            }
            else{
              current = "A6868";
              Chris.current = current;
              Current_At_A6868(Map);
              break;
            }
          }
          else if (next == "Chemistry"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats(1,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_2);
                cout << "You have obtained a "<< heal_2.name << ". It can heal you by "<< heal_2.value << "HP ."<< endl;
                Chris.Chris_Equiment.push_back(Gun_4);
                cout << "You have obtained a "<< Gun_4.name << ". It increases your damage by "<< Gun_4.damage << " and your speed by " << Gun_4.speed << "." << endl;
                system("pause");
                Chris.Map_Count[next] = 1;
                Chris.damage += Gun_4.damage;
                Chris.speed += Gun_1.speed;
                current = "chemistry";
                Current_At_Chemistry(Map);
                cout << "Auto Saving..." <<endl;
                Chris.current = current;
                SaveMap(Map);
                SaveCharacter(Chris);
                Sleep(1000);
                cout <<"Auto Save Completed!";
                Sleep(1000);
              }
              else if (result == 0){
                load_MainCharacter(Chris);
                SetItemAndEquiment(Chris);
                print_Lose();
                Chris.current = current;
                Sleep(1000);
                cout << "Loading from last saving..." << endl;
                Sleep(2000);
                break;
              }
              break;
            }
            else{
              current = "chemistry";
              Chris.current = current;
              Current_At_Chemistry(Map);
              break;
            }
          }
          else if (next == "Lobby"){
            current = "lobby";
            Chris.current = current;
            Current_At_Lobby(Map);
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            Sleep(3000);
            break;
          }
        }
      }
      else if (current == "securityoffice"){
        while (true){
          if (next == "Lobby"){
            current = "lobby";
            Chris.current = current;
            Current_At_Lobby(Map);
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            Sleep(3000);
            break;
          }
        }
      }
      else if (current == "A1"){
        while (true){
          if (next == "Lobby"){
            current = "lobby";
            Chris.current = current;
            Current_At_Lobby(Map);
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            Sleep(3000);
            break;
          }
        }
      }
      else if (current == "A6868"){
        while (true){
          if (next == "BioLab"){
            current = "biolab";
            Chris.current = current;
            Current_At_BioLab(Map);
            break;
          }
          else if (next == "Toilet"){
            //Entering toilet will grant you a hacking device to lower the difficulty of the TicTacToe
            //Before entering toilet you have to win a mini game called GuessObject to be granted the entry access
            cout << "You have to play a mini game to enter Toilet." << endl;
            cout << "You have to get a 3 out of 5 to win the mini game" << endl;
            int r1, score = 0;
            //This block of code will prevent same object from happening
            int Num_Picked[5]={0,0,0,0,0};
            for (int i = 0; i < 5; i++){
              do{
                r1 = rand() % 5;
              }
              while(Num_Picked[r1] == 1);
              Num_Picked[r1] = 1;
              if (guessObject(r1)){
                score++;
              }
            }
            if (score >= 3){
              current = "toilet";
              Current_At_Toilet(Map);
              Chris.current = "toilet";
              //Chris has acquired the hacking device
              Chris.Chris_Item.push_back(device);
              cout << "You have obtained a hacking device to lower the difficulty of the TicTaeToe game to unlock the locked entrance door." << endl;
              system("pause");
              break;
            }
            else{
              cout << "You have failed the mini game. Try Again. :) " << endl;
              system("pause");
              break;
            }
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            Sleep(3000);
            break;
          }
        }
      }
      else if (current == "chemistry"){
        while (true){
          if (next == "BioLab"){
            current = "biolab";
            Chris.current = current;
            Current_At_BioLab(Map);
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            Sleep(3000);
            break;
          }
        }
      }
      else if (current == "toilet"){
        while (true){
          if (next == "A6868"){
            current = "A6868";
            Chris.current = current;
            Current_At_A6868(Map);
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            Sleep(3000);
            break;
          }
        }
      }
    }
    else if (option == 2){
      int choice;
      if(Chris.Chris_Item.size() <= 0){
          cout<<"You don't have any items yet." << endl;
          system("pause");
          continue;
      }


      print_item(Chris.Chris_Item);
      cout << endl;
      cout << "[99]: I don't feel like using any item right now." << endl;
      cin >> choice;
      if (choice != 99 and choice < Chris.Chris_Item.size()){
        if (Chris.Chris_Item[choice].type == 1){
          Chris.health += Chris.Chris_Item[choice].value;
          cout << "You have been healed for " << Chris.Chris_Item[choice].value << "HP" << endl;
          system("pause");
          Chris.Chris_Item.erase(Chris.Chris_Item.begin()+choice);
        }
        //Use of Hacking Device to lower the difficulty of TicTaeToe
        //Only can be used when Chris is at Entrance
        else if(Chris.Chris_Item[choice].name == "Hacking Device"){
          if (current == "entrance"){
            cout << "The difficulty has been lowered." << endl;
            difficulty = 0;
            system("pause");
          Chris.Chris_Item.erase(Chris.Chris_Item.begin()+choice);
          }
          else{
            cout << "This item cannot be used here" << endl;
            system("pause");
          }
        }

        //Use of Wall Bomb to bomb the wall of jail to rescue his daughter Alexandra
        //Only can be used when Chris is at Secuiry Office
        else if(Chris.Chris_Item[choice].name == "Wall Bomb") {
          if (current == "securityoffice"){
            cout << "The wall of security office is bombed. You finally see your daughter. Your daughter is following you now." << endl;
            system("pause");
            Chris.Chris_Item.push_back(daughter);
            BombTheWall(Map);
          Chris.Chris_Item.erase(Chris.Chris_Item.begin()+choice);
          }
        else{
          cout << "This item cannot be used here" << endl;
          system("pause");
          }
        }

      }

    }
    else if (option == 3){

      print_equiment(Chris.Chris_Equiment);
      system("pause");
    }
    else if (option == 4){
      Chris.current = current;
      SaveMap(Map);
      SaveCharacter(Chris);
      break;

    }
    if (win == 1){
      print_Victory();
      break;
    }


    if (win == -1){
      print_Lose();
      break;
    }

}

return 0;
}
