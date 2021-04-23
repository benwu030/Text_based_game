#include<iostream>
using namespace std;

struct Item{
  string name;
  int health;
  int armour;
  int damage;
  int speed;
}Gun_1{"GLock-18 Pistol", 0, 0, 10, -1}, Armour_1{"Army Boots",0, 10, 0, 10}, Bandage{"Bandage", 20}, miniBandage{"Mini Bandage, 10"};

struct Character{
  string name;
  int health;
  int damage;
  int armour;
  int speed;
  string Current_location;
  Item item[15];
  Item equipped_item[4];
}Chris{"Chris Tombow", 100, 30, 20, 10, "",{Gun_1},{}} , zero{"Big Boss", 100, 5, 20, 10} , one{"Mister Muscles", 100, 5, 20, 10} , two{"Mister Hawkeye", 100, 5, 20, 10}, three{"Mister Guard", 50, 5, 5, 50};
