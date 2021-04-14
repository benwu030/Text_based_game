#include<iostream>
#include"ItemAndMonster.h"
using namespace std;
void head_insert(MC_Node * & head, int Number,Item New_Item_Gain)
{
	MC_Node * p = new MC_Node;
  p->NoOfOrder = Number;
	p->item = New_Item_Gain;
	p->next = head;
	head = p;
}
void print_list(MC_Node * head)
{
    MC_Node * current = head;
	while (current != NULL)
	{
		// process the current node, e.g., print the content
		cout << current->NoOfOrder <<" "<< current->item.name << " -> ";
		current = current->next;
	}
	cout << "NULL\n";
}



void delete_node(MC_Node * & head, int pos)
{
  MC_Node *current=new MC_Node;
  MC_Node *previous=new MC_Node;
  current = head;
  for(int i = 1; i < pos; i++)
  {
    previous = current;
    current = current->next;
  }
  previous->next = current->next;
  delete current;

}

void delete_head(MC_Node * & head)
{
  MC_Node *temp=new MC_Node;
  temp = head;
  head = head->next;
  delete temp;
}
void delete_item(MC_Node * & head, int pos){
  if(head == NULL){
    cout << "Item slot is empty"<<endl;
  }

  else if(pos == 1)
    delete_head(head);

  else
    delete_node(head, pos);
}
int main(){
  Main_character Chris = {"Chris",1,1,1,1,NULL};
  cout<<Gun_1.name<<endl<<Armour_1.name<<endl;
  cout<<Chris.name<<" "<<Chris.health<<endl<<Chris.Chris_Item->item;
  head_insert(Chris.Chris_Item,1,Gun_1);
  print_list(Chris.Chris_Item);
  head_insert(Chris.Chris_Item,2,Armour_1);
  print_list(Chris.Chris_Item);
  delete_item(Chris.Chris_Item,2);
  print_list(Chris.Chris_Item);
  delete_item(Chris.Chris_Item,1);
  print_list(Chris.Chris_Item);
  delete_item(Chris.Chris_Item,1);
  return 0;
}
