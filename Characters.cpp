#include<iostream>
using namespace std;

struct Item{
  string name;
  int armour;
  int damage;
  int speed;
}Gun_1{"GLock-18 Pistol",0,10,-1},Armour_1{"Army Boots",10,0,10};

struct Character{
  string name;
  int health;
  int damage;
  int armour;
  int speed;
  string Current_location;
  Item item[15];
  Item equipped_item[4];
}Chris{"Chris Tombow",100,30,20,10,"",{Gun_1},{}} , zero{Big Boss, 100, 5, 20, 10} , one{Mister Muscles, 100, 5, 20, 10} , two{Mister Hawkeye, 100, 5, 20, 10}, three{Mister Guard, 100, 5, 20, 10};



int main(){
  cout<<Gun_1.name<<endl<<Armour_1.name<<endl;
  cout<<Chris.name<<" "<<Chris.item[0].name;


  return 0;
}
