//ItemAndMonster_Struct.h
//This file contains all the saved data of status, equipments  of main character and mosnters
#ifndef ITEMANDMONSTER_H
#define ITEMANDMONSTER_H
#include <vector>
#include <map>
using namespace std;
struct Equiment{
  string identifier;
  string name;
  int health;
  int armour;
  int damage;
  int speed;
}Gun_1{"Gun_1","GLock-18 Pistol", 0, 0, 10, -1} ,Armour_1{"Armour_1","Army Boots", 0, 10, 0, 10},Armour_2{"Armour_2","Police Bullet Proof Vest", 0, 30, 0, 0};
vector<Equiment> Equiment_Array = {Gun_1,Armour_1,Armour_2};
struct Item{
  string identifier;
  string name;
  int value;
  int type;// type 1 = healing potion type 2 = grenade
}heal_1{"heal_1","Bandage",10,1},heal_2{"heal_2","Energy Drink",5,1},heal_3{"heal_3","Mysterious Potion",20,1},grenade_1{"grenade_1","High Explosive Grenade",30,2},heal_4{"heal_4","Mini Bandage", 10};
vector <Item> Item_Array ={heal_1,heal_2,heal_3,heal_4,grenade_1};

struct Main_character{

  string name;
  int health;
  int damage;
  int armour;
  int speed;
  vector<string>Chris_Item_Identifiers;
  vector<string>Chris_Equitment_Identifiers;
  vector<Item> Chris_Item;
  vector<Equiment> Chris_Equiment;
  map <string,int> Map_Count = {{"Toilet",0} ,{"Chemistry",0},{"A1",0},{"Jail",0},{"A6868",0},{"BioLab",0},{"Lobby",0},{"Security Office",0},{"Canteen",0},{"Entrance",0},{"Stairs",0}};
};

struct Monster{
  string name;
  int health;
  int damage;
  int armour;
  int speed;

}zero{"Big Boss", 100, 20, 20, 10} , one{"Mister Muscles", 100, 20, 10, 10} , two{"Mister Hawkeye", 70, 10, 15, 20}, three{"Mister Guard", 50, 5, 5, 50}, four{"Mister Alien", 50, 5, 3, 50};
#endif
