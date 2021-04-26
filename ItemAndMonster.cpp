//ItemAndMonster_Struct.h
//This file contains all the saved data of status, items and equipments of main character and mosnters
#include <vector>
#include <map>
#include <string>
#include "ItemAndMonster.h"
using namespace std;

//This struct is to store equipemtns that are possible to be obtained by main character Chris
Equiment Gun_1= {"Gun_1","GLock-18 Pistol", 0, 0, 10, -1} ,Gun_2 = {"Gun_2","AK47", 0, 0, 20, -3},Gun_3 = {"Gun_3","Shotgun", 0, 0, 15, -3}, Gun_4 ={"Gun_4","Sub Machine Gun", 0, 0, 10, -2},Armour_1={"Armour_1","Army Boots", 0, 5, 0, 10},Armour_2={"Armour_2","Police Bullet Proof Vest", 0, 10, 0, -5},Armour_3={"Armour_3","Army Gloves", 0, 5, 0, -2},Armour_4={"Armour_4","helmet", 0, 10, 0, -3};
Equiment_Array = {Gun_1,Gun_2,Gun_3,Gun_4,Armour_1,Armour_2,Armour_3,Armour_4};
//Use of dynamic memory - vector

//Thi struct is to store items that are possible to be obtained by Chris
Item heal_1={"heal_1","Bandage",15,1},heal_2={"heal_2","Energy Drink",10,1},heal_3={"heal_3","Mysterious Potion",20,1},heal_4={"heal_4","Mini Bandage",10,1},grenade_1={"grenade_1","M67 Grenade",20,2}, grenade_2={"grenade_2","Gas Bomb",15, 2}, device={"device","Hacking Device",0,0},daughter={"daughter", "Alexandra",0,0},bomb={"bomb","Wall Bomb",0,0};
Item_Array = {heal_1,heal_2,heal_3,heal_4,grenade_1,grenade_2,daughter,device,bomb};
//use of dynamic memory - vector

//This struct is speically for storing status, items and equipments of main character Chris


//This struct is for storing the stats and attributes of every monster
Monster zero{"Big Boss", 100, 40, 40, 10} , one{"Mister Muscles", 100, 30, 20, 10} , two{"Mister Hawkeye", 70, 20, 15, 20}, three{"Mister Guard", 50, 10, 5, 50}, four{"Mister Alien", 50, 10, 5, 50};
#endif
