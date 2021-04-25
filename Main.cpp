//This file contains the main function of our game
#include <iostream>
#include "tictactoe.h"
#include "Map.h"
#include "HomeMenu.cpp"
#include "ItemAndMonster.h"
#include "battle.cpp"
#include "tictactoe.h"
#include "guessObject.cpp"
#include "readfile.h"
#include "Main_Menu.cpp"
using namespace std;




int main(){
  string current, next;
  int option, difficulty = 1, win = 0;
  print_MainMenu();
  Main_character Chris;
  string Map[31];
  string choice;
  bool flag = false;
  while (!flag){
    getline(cin,choice);
    flag = MainMenu_Choice(choice, Map, Chris);
  }

  cout << "You are Chris, a former police. Your daughter Alexandra has been abducted by unknown." << endl;
  cout << "You have searched her for 2 years and now all clues pointed to this corp - BioReincarnation(Bior.)" << endl;
  cout << "Alexandra is said to be imprisoned in a lab inside an obsolete building." << endl;
  cout << "You are standing in front of the main entrance of the building. " << endl;
  cout << "Type anything and press Enter to continue: " << endl;

  cin.get();
  system("CLS");
  current = "entrance";
  Current_At_Entrance(Map);
  Display_Lab_Map(Map);
  cout << "This is the map of the building." << endl;
  cout << "You are at the \"Entrance\" now."<< endl;
  cout << "The door is locked right after you enter the Entrance" << endl;
  cout << "You have to play a very very very difficult TicTaeToe game to opoen the door." << endl;
  cout << "You might find something useful to lower the difficulty of the tictaetoe but I can't guarantee you." << endl;
  cout << "Type anything and press Enter to continue: ";
  cin.get();
  int result;

  while (true){
    system("CLS");
    print_HomeMenu(Map,Chris);
    cin >> option;
    if (option == 1){
      cout << "Where do you want to go next?" << endl;
      cin >> next;
      if (current == "entrance"){
        while (true){
          if (next == "Canteen"){
            if (Chris.Map_Count[next] == 0){
              cin.get();
              result = battleStats(2,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_1);
                cout << "You have obtained a "<< heal_1.name << ". It can heal you by "<< heal_1.value << "HP ."<< endl;
                Chris.Chris_Equiment.push_back(Armour_1);
                cout << "You have obtained an "<< Armour_1.name << ". It increases your armour by "<< Armour_1.armour << " and your speed by " << Armour_1.speed << "." << endl;
                Sleep(5000);
                Chris.Map_Count[next] = 1;
                Chris.armour += Armour_1.armour;
                Chris.speed += Armour_1.speed;
                current = "Canteen";
                Current_At_Canteen(Map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "Canteen";
              Current_At_Canteen(Map);
              break;
            }
          }
          else if (next == "Stairs"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats(2,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_2);
                cout << "You have obtained a "<< heal_2.name << ". It increases your health by "<< heal_2.value << "." << endl;
                Chris.Chris_Equiment.push_back(Gun_1);
                cout << "You have obtained an "<< Gun_1.name << ". It increases your damage by "<< Gun_1.damage << "." <<  endl;
                Sleep(5000);
                Chris.Map_Count[next] = 1;
                Chris.damage += Gun_1.damage;
                Chris.speed += Gun_1.speed;
                current = "Stairs";
                Current_At_Stairs(Map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "Stairs";
              Current_At_Stairs(Map);
              break;
            }
          }
          else if (next == "Lobby"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats(2,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_3);
                cout << "You have obtained a "<< heal_3.name << ". It increases your health by "<< heal_3.value << "." << endl;
                Chris.Chris_Equiment.push_back(Armour_2);
                cout << "You have obtained a "<< Armour_2.name << ". It increases your armour by "<< Armour_2.armour << "." << endl;
                Sleep(5000);
                Chris.Map_Count[next] = 1;
                Chris.armour += Armour_2.armour;
                Chris.speed += Armour_2.speed;
                current = "lobby";
                Current_At_Lobby(Map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "lobby";
              Current_At_Lobby(Map);
              break;
            }
          }
          else if (next == "Outside"){
            cout << "You have to win a TicTacToe game in order to unlock the door and go outside." << endl;
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
      else if (current == "Canteen"){
        while (true){
          if (next == "Entrance"){
            current = "entrance";
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
      else if (current == "Stairs"){
        while (true){
          if (next == "Entrance"){
            current = "entrance";
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
                cout << "You have obtained a "<< heal_1.name << ". It increases your health by "<< heal_1.value << "." <<  endl;
                Chris.Chris_Equiment.push_back(Armour_4);
                cout << "You have obtained a "<< Armour_4.name << ". It increases your armour by "<< Armour_4.armour << "." << endl;
                Sleep(5000);
                Chris.Map_Count[next] = 1;
                Chris.armour += Armour_4.armour;
                Chris.speed += Armour_4.speed;
                current = "biolab";
                Current_At_BioLab(Map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "biolab";
              Current_At_BioLab(Map);
              break;
            }
          }
          else if (next == "SecurityOffice"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats(0,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_2);
                cout << "You have obtained a "<< heal_2.name << ". It increases your health by "<< heal_2.value << "." <<  endl;
                Chris.Chris_Item.push_back(grenade_1);
                cout << "You have obtained a "<< grenade_1.name << endl;
                cout << "Your daughter is in the jail now. In order to save her you need to use the grenade to bomb the wall" << endl;
                cout << "Or you can use the grenade to bomb the Toilet's wall after you have rescued your daughter." << endl;
                Sleep(7000);
                Chris.Map_Count[next] = 1;
                current = "securityoffice";
                Current_At_SecurityOffice(Map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "securityoffice";
              Current_At_SecurityOffice(Map);
              break;
            }
          }
          else if (next == "A1"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats(1,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_2);
                cout << "You have obtained a "<< heal_2.name << ". It increases your health by "<< heal_2.value << "." << endl;
                Chris.Chris_Equiment.push_back(Gun_2);
                cout << "You have obtained a "<< Gun_2.name << ". It increases your damage by "<< Gun_2.damage << "." << endl;
                Sleep(5000);
                Chris.Map_Count[next] = 1;
                Chris.damage += Gun_2.damage;
                Chris.speed += Gun_2.speed;
                current = "A1";
                Current_At_A1(Map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "A1";
              Current_At_A1(Map);
              break;
            }
          }
          else if (next == "Entrance"){
            current = "entrance";
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
                cout << "You have obtained a "<< heal_3.name << ". It increases your health by "<< heal_3.value << "." << endl;
                Chris.Chris_Equiment.push_back(Gun_3);
                cout << "You have obtained a "<< Gun_3.name << ". It increases your damage by "<< Gun_3.damage << "." << endl;
                Sleep(5000);
                Chris.Map_Count[next] = 1;
                Chris.damage += Gun_3.damage;
                Chris.speed += Gun_3.speed;
                current = "A6868";
                Current_At_A6868(Map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "A6868";
              Current_At_A6868(Map);
              break;
            }
          }
          else if (next == "Chemistry"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats(1,Chris);
              if (result == 1){
                Chris.Chris_Item.push_back(heal_2);
                cout << "You have obtained a "<< heal_2.name << ". It increases your health by "<< heal_2.value << "." << endl;
                Chris.Chris_Equiment.push_back(Gun_4);
                cout << "You have obtained a "<< Gun_4.name << ". It increases your damage by "<< Gun_4.damage << "." << endl;
                Sleep(5000);
                Chris.Map_Count[next] = 1;
                Chris.damage += Gun_4.damage;
                Chris.speed += Gun_1.speed;
                current = "chemistry";
                Current_At_Chemistry(Map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "chemistry";
              Current_At_Chemistry(Map);
              break;
            }
          }
          else if (next == "Lobby"){
            current = "lobby";
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
            Current_At_BioLab(Map);
            break;
          }
          else if (next == "Toilet"){
            cout << "You have to play a mini game to enter Toilet." << endl;
            cout << "You have to get a 3 out of 5 to win the mini game" << endl;
            int r1 = rand() % 5, score = 0;
            for (int i = 0; i < 5; i++){
              if (guessObject(r1)){
                score++;
              }
            }
            if (score >= 3){
              current = "Toilet";
              Current_At_Toilet(Map);
              Chris.Chris_Item.push_back(device);
              cout << "You have obtained a hacking device to lower the difficulty of the TicTaeToe game to unlock the locked entrance door." << endl;
              Sleep(3000);
              break;
            }
            else{
              cout << "You have failed the mini game. You dumb dumb." << endl;
              Sleep(3000);
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
      else if (current == "Chemistry"){
        while (true){
          if (next == "A6868"){
            current = "A6868";
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
      else if (current == "Toilet"){
        while (true){
          if (next == "A6868"){
            current = "A6868";
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
          Sleep(2000);
          continue;
      }


      print_item(Chris.Chris_Item);

      cout << "[99]: I don't feel like using any item right now." << endl;
      cin >> choice;
      if (choice != 99 and choice < Chris.Chris_Item.size()){
        if (Chris.Chris_Item[choice].name == "Bandage"){
          Chris.health += Chris.Chris_Item[choice].value;
        }
        else if(Chris.Chris_Item[choice].name == "Energy Drink"){
          Chris.health += Chris.Chris_Item[choice].value;
        }
        else if(Chris.Chris_Item[choice].name == "Mysterious Potion"){
          Chris.health += Chris.Chris_Item[choice].value;
        }
        else if(Chris.Chris_Item[choice].name == "Hacking Device"){
          difficulty = 0;
        }
        else if(Chris.Chris_Item[choice].name == "High Explosive Grenade") {
          if (current == "securityoffice"){
            cout << "The wall of security office is bombed. You finally see your daughter. Your daughter is following you now." << endl;
            Chris.Chris_Item.push_back(daughter);
          }
          else{
            cout << "This item cannot be used here" << endl;
          }
        }
        //Item temp = Chris.Chris_Item[choice];
      /*  Chris.Chris_Item[choice] = Chris.Chris_Item[item.size() - 1];
        Chris.Chris_Item[Chris.Chris_Item.size() - 1] = temp;
        Chris.Chris_Item.pop_back();*/
        Chris.Chris_Item.erase(Chris.Chris_Item.begin()+choice);
      }

    }
    else if (option == 3){
      break;
    }
    if (win == 1)
      break;
  }


return 0;
}
