//Program Description: This program is responsible for the appearance of home page
#include <iostream>
#include "Map.h"

#include "readfile.h"
#include "HomeMenu.h"
#include "ItemAndMonster.h"
using namespace std;

//This function will be called out and placed at the top of terminal everytime other than battle time
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
    cout << "[3]: Check your equipment " << endl;
    cout << "[4]: Save and quit" << endl;
}
