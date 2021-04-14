//Linkedlist.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
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
		cout << current->NoOfOrder <<" "<< current->item.name <<endl;
		current = current->next;
	}

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
bool isEmpty(MC_Node* head){
	return head == NULL;
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
#endif
