//This file contains the main function of our game
#include <iostream>
#include "tictactoe.h"
#include "Map.h"
#include "HomeMenu.cpp"
#include "ItemAndMonster.h"
#include "battle.cpp"
#include "tictactoe.h"
#include "guessObject.cpp"
#include "readfile.cpp"

using namespace std;




int main(){
  string current, next;
  int option, difficulty = 1, win = 0;
  cout << "You are Chris, a former police. Your daughter Alexandra has been abducted by unknown. You have searched her for 2 years and now all clues pointed to this corp - BioReincarnation(Bior.) Alexandra is said to be imprisoned in a lab inside an obsolete building. You are standing in front of the main entrance of the building. " << endl;
  cout << "Type anything and press Enter to continue: ";
  cin.get();
  Display_Lab_Map(map);
  cout << "This is the map of the building." << endl;
  cout << "You are at the \"Entrance\" now."<< endl;
  cout << "The door is locked right after you enter the Entrance" << endl;
  cout << "You have to play a very very very difficult TicTaeToe game to opoen the door." << endl;
  cout << "You might find something useful to lower the difficulty of the tictaetoe but I can't guarantee you." << endl;
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
            if (Chris.Map_Count[next] == 0){
              int result = battleStats();
              if (result == 1){
                Chris.Chris_Item.push_back(heal_1);
                cout << "You have obtained a "<< heal_.name << ". It increases your health by "<< heal_1.armour << "." endl;
                Chris.Chris_Equiment.push_back(Armour_1);
                cout << "You have obtained an "<< Armour_1.name << ". It increases your armour by "<< Armour_1.armour << " and your speed by " << Armour_1.speed << "." << endl;
                Chris.armour += Armour_1.armour;
                Chris.speed += Armour_1.speed;
                current = "canteen";
                Current_At_Canteen(map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "canteen"
              Current_At_Canteen(map);
              break;
            }
          }
          else if (next == "Stairs"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats();
              if (result == 1){
                Chris.Chris_Item.push_back(heal_2);
                cout << "You have obtained a "<< heal_2.name << ". It increases your health by "<< heal_2.value << "." endl;
                Chris.Chris_Equiment.push_back(Gun_1);
                cout << "You have obtained an "<< Gun_1.name << ". It increases your damage by "<< Gun_1.damage << "." endl;
                Chris.damage += Gun_1.damage;
                Chris.speed += Gun_1.speed;
                current = "stairs";
                Current_At_Stairs(map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "stairs";
              Current_At_Stairs(map);
              break;
            }
          }
          else if (next == "Lobby"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats();
              if (result == 1){
                Chris.Chris_Item.push_back(heal_3);
                cout << "You have obtained a "<< heal_3.name << ". It increases your health by "<< heal_3.value << "." endl;
                Chris.Chris_Equiment.push_back(Armour_2);
                cout << "You have obtained a "<< Armour_2.name << ". It increases your armour by "<< Armour_2.armour << "." endl;
                Chris.armour += Armour_2.armour;
                Chris.speed += Armour_2.speed;
                current = "lobby";
                Current_At_Lobby(map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "lobby";
              Current_At_Lobby(map);
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
            }
            else{
              cout << "You lost. Try again." << endl;
            }
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
            if (Chris.Map_Count[next] == 0){
              int result = battleStats();
              if (result == 1){
                Chris.Chris_Item.push_back(heal_1);
                cout << "You have obtained a "<< heal_1.name << ". It increases your health by "<< hea1_1.value << "." endl;
                Chris.Chris_Equiment.push_back(Armour_4);
                cout << "You have obtained a "<< Armour_4.name << ". It increases your armour by "<< Armour_4.armour << "." endl;
                Chris.armour += Armour_4.armour;
                Chris.speed += Armour_4.speed;
                current = "biolab";
                Current_At_BioLab(map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "biolab";
              Current_At_BioLab(map);
              break;
            }
          }
          else if (next == "Security Office"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats();
              if (result == 1){
                Chris.Chris_Item.push_back(heal_2);
                cout << "You have obtained a "<< heal_2.name << ". It increases your health by "<< heal_2.value << "." endl;
                Chris.Chris_Item.push_back(grenade_1);
                cout << "You have obtained a "<< grenade_1.name << endl;
                cout << "Your daughter is in the jail now. In order to save her you need to use the grenade to bomb the wall" << endl;
                cout << "Or you can use the grenade to bomb the toilet's wall after you have rescued your daughter." << endl;
                current = "security office";
                Current_At_SecurityOffice(map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "security office";
              Current_At_SecurityOffice(map);
              break;
            }
          }
          else if (next == "A1"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats();
              if (result == 1){
                Chris.Chris_Item.push_back(heal_2);
                cout << "You have obtained a "<< heal_2.name << ". It increases your health by "<< heal_2.value << "." endl;
                Chris.Chris_Equiment.push_back(Gun_2);
                cout << "You have obtained a "<< Gun_2.name << ". It increases your damage by "<< Gun_2.damage << "." endl;
                Chris.damage += Gun_2.damage;
                Chris.speed += Gun_2.speed;
                current = "A1";
                Current_At_A1(map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "A1";
              Current_At_A1(map);
              break;
            }
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
            if (Chris.Map_Count[next] == 0){
              int result = battleStats();
              if (result == 1){
                Chris.Chris_Item.push_back(heal_3);
                cout << "You have obtained a "<< heal_3.name << ". It increases your health by "<< heal_3.value << "." endl;
                Chris.Chris_Equiment.push_back(Gun_3);
                cout << "You have obtained a "<< Gun_3.name << ". It increases your damage by "<< Gun_3.damage << "." endl;
                Chris.damage += Gun_3.damage;
                Chris.speed += Gun_3.speed;
                current = "A6868";
                Current_At_A6868(map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "A6868";
              Current_At_A6868(map);
              break;
            }
          }
          else if (next == "Chemistry"){
            if (Chris.Map_Count[next] == 0){
              int result = battleStats();
              if (result == 1){
                Chris.Chris_Item.push_back(heal_2);
                cout << "You have obtained a "<< heal_2.name << ". It increases your health by "<< heal_2 << "." endl;
                Chris.Chris_Equiment.push_back(Gun_4);
                cout << "You have obtained a "<< Gun_4.name << ". It increases your damage by "<< Gun_4.damage << "." endl;
                Chris.damage += Gun_4.damage;
                Chris.speed += Gun_1.speed;
                current = "chemistry";
                Current_At_Chemistry(map);
              }
              else if (result == 0){

              }
              break;
            }
            else{
              current = "chemistry";
              Current_At_Chemistry(map);
              break;
            }
          }
          else if (next == "Lobby"){
            current = "lobby";
            Current_At_Lobby(map);
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
            break;
          }
          else if (next == "Toilet"){
            cout << "You have to play a mini game to enter toilet." << endl;
            cout << "You have to get a 3 out of 5 to win the mini game" << endl;
            int r1 = rand() % 5, score = 0;
            for (int i = 0; i < 5; i++){
              if (guessObject(r1)){
                score++;
              }
            }
            if (score >= 3){
              current = "toilet";
              Current_At_Toilet(map);
              Chris.Chris_Item.push_back(device);
              cout << "You have obtained a hacking device to lower the difficulty of the TicTaeToe game to unlock the locked entrance door." << endl;
              break;
            }
            else{
              cout << "You have failed the mini game. You dumb dumb." << endl;
              break;
            }
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            cin >> next;
          }
        }
      }
      else if (current == "Chemistry"){
        while (true){
          if (next == "A6868"){
            current = "A6868";
            Current_At_A6868(map);
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            cin >> next;
          }
        }
      }
      else if (current == "Toilet"){
        while (true){
          if (next == "BioLa"){
            current = "biolab";
            Current_At_BioLab(map);
            break;
          }
          else{
            cout << "You cannot reach there with your current location or you have typed the wrong location name." << endl;
            cin >> next;
          }
        }
      }
    }
    else if (option == 2){
      int choice;
      print_item();
      cout << "[99]: I don't feel like using any item right now." << endl;
      cin >> choice;
      if (choice != 99){
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
          if (current == "security office"){
            cout << "The wall of security office is bombed. You finally see your daughter. Your daughter is following you now." << endl;
          }
          else{
            cout << "This item cannot be used here" << endl;
          }
        }
        Item temp = Chris.Chris_Item[choice];
        Chris.Chris_Item[choice] = Chris.Chris_Item[item.size() - 1];
        Chris.Chris_Item[Chris.Chris_Item.size() - 1] = temp;
        Chris.Chris_Item.pop_back();
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
