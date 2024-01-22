#include<iostream>
using namespace std;

class Node{
   
   public:
   Node* next;
   Node* prev;
   int data;

   Node(int val)
   {
    data=val;
    next=NULL;
    prev=NULL;
   }
};


void insert_At_Head(Node*&head,int data)
{
    Node* newNode=new Node(data);
    Node* temp=head;


    if(temp==NULL)
    {   
        head=newNode;
        return;
    }

    head->prev=newNode;
    newNode->next=head;
    head=newNode;

}


void insert_at_tail(Node* & head,int data){

    Node* newNode=new Node(data);
    Node*temp=head;
    if(temp==NULL)
    {
        insert_At_Head(head,data);
        return;
    }
    while(temp->next!=NULL)
    { 
       temp=temp->next;
    }
    newNode->prev=temp;
    temp->next=newNode;

}

void display(Node* head)
{
  Node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }

}

void displayReverse(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->prev->data;
        temp=temp->prev;
    }
}

int main(){

   Node* head=NULL;
   int n;
   cout<<"how many nodes u want to connect :";
   cin>>n;
   cout<<"enter value :";
   for(int i=0;i<n;i++)
   {
    int x;

    cin>>x;
    insert_At_Head(head,x);

   }
   display(head);
   cout<<endl;

   cout<<"enter the value u want to add at tail :";
   int y;
   cin>>y;
   insert_at_tail(head,y);
   display(head);
   cout<<endl;

   cout<<"after displaying reverse :";
   displayReverse(head);

   
}