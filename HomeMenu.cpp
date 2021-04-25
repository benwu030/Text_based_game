#include <iostream>
#include "Map.cpp"
#include "readfile.cpp"

using namespace std;

void print_HomeMenu(){
  while (Chris.health > 0 || ){
    system "CLS";
    Display_Lab_Map(vector<string> map);
    cout << "The asterisk (*) indicates your position." << endl;
    cout << "Name: " << Chris.name << endl;
    cout << "Health: " << Chris.health << endl;
    cout << "Armour: " << Chris.armour << endl;
    cout << "Damage: " << Chris.damage << endl;
    cout << "Speed: " << Chris.speed << endl;
    cout << endl << endl;
    cout << "[1]: Move to other location" << endl;
    cout << "[2]: Check your items" << endl;
    cout << "[3]: Save and quit" << endl;
    int option;
    cin >> option;
    if (option == 1){
      cout << "Where do you want to go next?" << endl;
      cin >> current
    }

  }
}
