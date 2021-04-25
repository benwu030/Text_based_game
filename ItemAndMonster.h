//ItemAndMonster_Struct.h
#ifndef ITEMANDMONSTER_H
#define ITEMANDMONSTER_H
#include <vector>
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
}heal_1{"heal_1","Bandage",10,1},heal_2{"heal_2","Enery Drink",5,1},heal_3{"heal_3","mysterious potion",20,1},grenade_1{"grenade_1","high explosive grenade",30,2},heal_4{"heal_4","Mini Bandage", 10};
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
};

struct Monster{
  string name;
  int health;
  int damage;
  int armour;
  int speed;

}zero{"Big Boss", 100, 20, 20, 10} , one{"Mister Muscles", 100, 20, 10, 10} , two{"Mister Hawkeye", 70, 10, 15, 20}, three{"Mister Guard", 50, 5, 5, 50};
#endif
