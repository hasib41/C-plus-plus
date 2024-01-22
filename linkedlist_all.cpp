#include<iostream>
using namespace std;
class node{
    public: 

    int data;
    node* next;

    node(int value){
        data=value;
        next=NULL;
    }
};



void InsertAtTail(node* &head,int value){
    node* newNode=new node(value);
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


void insertAtHead(node*& head,int value){
    
    node* newNode=new node(value);
     if(head==NULL)
    {
        head=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;

}  


// bool search(node* head,int key)
// {
//    node* temp=head;
//    while(temp!=NULL)
//    {
//      if(temp->data==key)
//      {
//      return true;
//      }
//      temp=temp->next;
//    }
   
//    return false;
// }
int count(node*head)
{
    node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}


void deletion_at_head(node*&head)
{
    node* temp=head;
    head=temp->next;
    node* todelete=temp;
    delete todelete;


}



void Ddelete(node*& head,int del)
{
   node* temp=head;
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deletion_at_head(head);
        return;
    }
   while(temp->next->data!=del)
   {
     temp=temp->next;
   }
   node* todelete=temp->next;
   temp->next=temp->next->next;
   delete todelete;
}
void deletion_at_tail(node*head)
{
   node*temp=head;
   while(temp->next!=NULL)
   {
     temp=temp->next;
   }
   node* todelete=temp;
   delete todelete;
}


node* recursively_reverse(node*&head)
{
    if(head==NULL || head->next==NULL)
    {
       return head; 
    }
    node *newNode=recursively_reverse(head->next);
    head->next->next=head;
    head->next=NULL;

    return newNode;


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
   int n;
   cout<<"enter how many nodes u wanna connnect :";
   cin>>n;
   int x;
   cout<<"enter data :";
   
   for(int i=0;i<n;i++)
   {
    cin>>x;
    InsertAtTail(head,x);
   }
   display(head);
   int y;
   cout<<endl;
   cout<<"enter the value you wanna add at head :";
   cin>>y;
   insertAtHead(head,y);
   display(head);
   cout<<endl;
//    int key;
//    cout<<"enter the value u want to search :";
//    cin>>key;
//    cout<<search(head,key);
   cout<<endl;
   int del;
   cout<<"enter the data u want to delete :";
   cin>>del;
   Ddelete(head,del);
   display(head);
   cout<<endl;


   cout<<count(head);
   cout<<endl;


   cout<<"after deletion head :";
   deletion_at_head(head);
   display(head);
   cout<<endl;

   deletion_at_tail(head);
   display(head);
    cout<<endl;

   node* hasib=recursively_reverse(head);
   display(hasib);



}