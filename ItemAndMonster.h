//ItemAndMonster_Struct.h
#ifndef ITEMANDMONSTER_H
#define ITEMANDMONSTER_H

#include<string>
using namespace std;
struct equiment{
  string name;
  int armour;
  int damage;
  int speed;
}Gun_1{"GLock-18 Pistol",0,10,-1},Armour_1{"Army Boots",10,0,10};

struct Item{
  string name;
  int value;
  int type;// type 1 = healing potion type 2 = grenade
}heal_1{"Bandage"}
struct MC_Node{
  int NoOfOrder;
	Item item;
	MC_Node * next;
};

struct Main_character{
  string name;
  int health;
  int damage;
  int armour;
  int speed;
  MC_Node * Chris_Item;
}Chris{"Chris",100,30,10,5,NULL};

struct Monster{
  string name;
  int health;
  int damage;
  int armour;
  int speed;

}zero{"Big Boss", 100, 20, 20, 10} , one{"Mister Muscles", 100, 20, 10, 10} , two{"Mister Hawkeye", 70, 10, 15, 20}, three{"Mister Guard", 50, 5, 5, 50};
#endif
