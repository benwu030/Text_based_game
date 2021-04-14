#include<iostream>
#include "ItemAndMonster.h"
using namespace std;


<<<<<<< HEAD




int main(){
  cout<<Gun_1.name<<endl<<Armour_1.name<<endl;
  cout<<Chris.name<<" "<<Chris.health<<endl;
  // head_insert(Chris.Chris_Item,Gun_1);
  // print_list(Chris.Chris_Item);
  // head_insert(Chris.Chris_Item,Armour_1);
  // print_list(Chris.Chris_Item);

  return 0;
}
=======
struct Character{
  string name;
  int health;
  int damage;
  int armour;
  int speed;
  string Current_location;
  Item item[15];
  Item equipped_item[4];
}Chris{"Chris Tombow",100,30,20,10,"",{Gun_1},{}} , zero{"Big Boss", 100, 5, 20, 10} , one{"Mister Muscles", 100, 5, 20, 10} , two{"Mister Hawkeye", 100, 5, 20, 10}, three{"Mister Guard", 100, 5, 20, 10};
>>>>>>> c7259c992d6cc75051d66a220c0272c2a39e00bb
