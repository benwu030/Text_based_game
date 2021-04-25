#include <iostream>
#include "Map.h"
<<<<<<< HEAD
#include "readfile.cpp"
#include "ItemAndMonster.h"
=======
#include "readfile.h"
>>>>>>> fe8a69f55314337978952f1c9844c623dc9371e2

using namespace std;

//This will be called out and placed at the top of terminal everytime other than battle time
void print_HomeMenu(string Map[], Main_character Chris){
    Display_Lab_Map(Map);
    cout << "The asterisk (*) indicates your position." << endl;
    cout << endl;
    cout << "Name: " << Chris.name << endl;
    cout << "Health: " << Chris.health << endl;
    cout << "Armour: " << Chris.armour << endl;
    cout << "Damage: " << Chris.damage << endl;
    cout << "Speed: " << Chris.speed << endl;
    cout << endl << endl;
    cout << "[1]: Move to other location" << endl;
    cout << "[2]: Check your items" << endl;
    cout << "[3]: Save and quit" << endl;
}
