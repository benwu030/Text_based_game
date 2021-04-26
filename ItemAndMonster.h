//ItemAndMonster_Struct.h
//This file contains all the saved data of status, items and equipments of main character and mosnters
#ifndef ITEMANDMONSTER_H
#define ITEMANDMONSTER_H
#include <vector>
#include <map>

using namespace std;

//This struct is to store equipemtns that are possible to be obtained by main character Chris
struct Equiment{
  string identifier;
  string name;
  int health;
  int armour;
  int damage;
  int speed;
};
//Use of dynamic memory - vector

//Thi struct is to store items that are possible to be obtained by Chris
struct Item{
  string identifier;
  string name;
  int value;
  int type;//type 0 = device type 1 = healing potion type 2 = grenade
};
//use of dynamic memory - vector

//This struct is speically for storing status, items and equipments of main character Chris
struct Main_character{
  string name;
  int health;
  int damage;
  int armour;
  int speed;
  string current;
  vector<string>Chris_Item_Identifiers;
  vector<string>Chris_Equitment_Identifiers;
  vector<Item> Chris_Item;
  vector<Equiment> Chris_Equiment;
  map<string,int> Map_Count;
};

//This struct is for storing the stats and attributes of every monster
struct Monster{
  string name;
  int health;
  int damage;
  int armour;
  int speed;
};
#endif
