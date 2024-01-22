#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next=NULL;
    node(int val)
    {
        data=val;
        next=NULL;
    }

};
void InsertAtTail(node*& head,int data)
{
    node* newNode=new node(data);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void display(node* head)
{
      node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
       
    }
  

}
int main(){
   
   node* head=NULL;
   int n,x;
   cout<<"how many nodes u wanna connect :" ;
   cin>>n;
   cout<<"enter value :";
   for(int i=0;i<n;i++)
   { 
     cin>>x;
     InsertAtTail(head,x);
   }
   display(head);

}