//ItemAndMonster_Struct.h
//This file contains all the saved data of status, items and equipments of main character and mosnters
#ifndef ITEMANDMONSTER_H
#define ITEMANDMONSTER_H
#include <vector>
#include <map>
#include <string>
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
extern Equiment Gun_1, Gun_2,Gun_3,Gun_4,Armour_1,Armour_2,Armour_3,Armour_4;
//Use of dynamic memory - vector
extern vector<Equiment> Equiment_Array;
//Thi struct is to store items that are possible to be obtained by Chris
struct Item{
  string identifier;
  string name;
  int value;
  int type;//type 0 = device type 1 = healing potion type 2 = grenade
};
extern Item heal_1, heal_2,heal_3,heal_4,grenade_1,grenade_2,device,daughter,bomb;
//use of dynamic memory - vector
extern vector<Item> Item_Array;
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
extern Monster zero,one,two,three,four;
#endif
