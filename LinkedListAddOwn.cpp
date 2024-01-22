#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val)
    {
       data=val;
       next=NULL;
    }
};
void InsertAtTail(node* &head,int  data)  
{  

    node* node1= new node(data);
    node* temp=head;
    if(head==NULL)
    {
        head=node1;
        return;
    }

    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=node1;    
}
void display(node* head)
{   
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
     node* head= NULL;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {   
        int x;
        cin>>x;
        InsertAtTail(head,x);
    }
    //InsertAtTail(n);
    display(head);
}