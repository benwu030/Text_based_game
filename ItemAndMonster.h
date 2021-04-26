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
}Gun_1{"Gun_1","GLock-18 Pistol", 0, 0, 10, -1} ,Gun_2{"Gun_2","AK47", 0, 0, 20, -3},Gun_3{"Gun_3","Shotgun", 0, 0, 15, -3}, Gun_4{"Gun_4","Sub Machine Gun", 0, 0, 10, -2},Armour_1{"Armour_1","Army Boots", 0, 5, 0, 10},Armour_2{"Armour_2","Police Bullet Proof Vest", 0, 10, 0, -5},Armour_3{"Armour_3","Army Gloves", 0, 5, 0, -2},Armour_4{"Armour_4","helmet", 0, 10, 0, -3};
vector<Equiment> Equiment_Array = {Gun_1,Gun_2,Gun_3,Gun_4,Armour_1,Armour_2,Armour_3,Armour_4};
struct Item{
  string identifier;
  string name;
  int value;
  int type;// type 1 = healing potion type 2 = grenade
}heal_1{"heal_1","Bandage",15,1},heal_2{"heal_2","Energy Drink",10,1},heal_3{"heal_3","Mysterious Potion",20,1},grenade_1{"grenade_1","M67 Grenade",20,2}, grenade_2{"grenade_2","Gas Bomb",15, 2} heal_4{"heal_4","Mini Bandage", 10}, device{"device","Hacking Device",0,0},daughter{"daughter", "Alexandra",0,0},bomb("bomb","WallBomb",0,0);
vector <Item> Item_Array ={heal_1,heal_2,heal_3,heal_4,grenade_1,grenade_2,daughter,device,bomb};

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

struct Monster{
  string name;
  int health;
  int damage;
  int armour;
  int speed;

}zero{"Big Boss", 100, 40, 40, 10} , one{"Mister Muscles", 100, 30, 20, 10} , two{"Mister Hawkeye", 70, 20, 15, 20}, three{"Mister Guard", 50, 10, 5, 50}, four{"Mister Alien", 50, 10, 5, 50};
#endif
