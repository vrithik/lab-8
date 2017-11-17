#include<iostream>
using namespace std;
class Node
{  
   public:
   int num;
   Node *next;
};
class LinkedList
{
   public:
   Node *head, *tail;
   LinkedList()
   {
      head=NULL;
      tail=NULL;
   }
   void AddNode(int n)
   {
      Node *tmp=new Node;
      tmp->num=n;
      tmp->next=NULL;
      if(head=NULL)
      {
         head=tmp;
         tail=tmp;
      }
      else
      {
         tail->next=tmp;
         tail=tail->next;
      }
   }
   void Insert(int data, int n)
   {
      Node *n=new Node;
      n->num=data;  
      if(position==0)
      {
      n->next=head;
      head=n;
     }
     else
     {
         Node *c=new Node;
         int count=1;
         c=head;
         while(count!=position)
         {
          c=c->next;
          count++;
         }
      n->next=c->next;
      c->next=n;
     }
   }
   void deleteNode(int pos)
   {
      int count=0;
      Node* temp, *temp1, *temp2;
      temp = head  ;
      if(head==NULL)
      {
        cout<<"\n \nLinked List Empty !!!";
      }
      else if(pos == 0)
      {
        head = head->next;
        delete temp;
      }
      else
      {
      while(count!= pos-1)
      {
         temp = temp->next;
         count++;   
      }
      temp1 = temp->next;
      temp->next = temp1->next;
      temp1->next=NULL;
      delete temp1;
   } 
};
