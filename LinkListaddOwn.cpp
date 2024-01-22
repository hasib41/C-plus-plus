#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
     
    node(int val){
        data=val;
        next=NULL;

    }

};


void InsertNumber(node*&head,int value){
  
    node *newNode= new node(value);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
   node *temp= head;
   while(temp->next!=NULL)
   {
    temp=temp->next;
   }
    temp->next=newNode;

}
void display(node*head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int data;
    node* head=NULL;
    for(int i=1;i<=5;i++)
    {
        cin>>data;
        InsertNumber(head,data);
    }
   

    display(head);


}