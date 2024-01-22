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
void insertAtHead(node* &head,int val)
{
    node* newNode =new node(val);
    newNode->next=head;
    head=newNode;
}
bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key){
        return true;
    }
    temp=temp->next;
    }
    return false;
}
void delete(node*& head,int del)
{
    node* temp=head;
    while(temp->next->data!=del)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
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
   int y;
   cout<<"enter the value u want to add at head ";
   cin>>y;
   insertAtHead(head,y);
   display(head);
   int key;
   cout<<"enter the value u want to search :";
   cin>>key;
   cout<< search(head,key);
   int del;
   cout<<"enter the value u wanna delete :";
   cin>>del;
   cout<<delete(head,del);


}