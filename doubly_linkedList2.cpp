#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};


void insert_at_tail(Node*&head,int data)
{
   Node* newNode=new Node(data);
   Node* temp=head;
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




int main(){
    
   Node* head=NULL;
   int x,n;
   cout<<"how many Nodes u want to connect :";
   cin>>n;
   cout<<"enter value :";
   for(int i=0;i<n;i++)
   {
    cin>>x;
    insert_at_tail(head,x);
   }
   display(head);

}