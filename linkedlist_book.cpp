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

void instert_At_tail(node*& head,int data)
{
    node* newNode=new node(data);

    if(head==NULL)
    {
        head=newNode;
        return;
    }

    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}



void instert_At_tail2(node*& head,int data)
{
    node* newNode=new node(data);

    if(head==NULL)
    {
        head=newNode;
        return;
    }

    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
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

int main()
{
    node*head=NULL;
    int x,n;
    cout<<"enter how many nodes :";
    cin>>x;
    cout<<"enter values";
    for(int i=1;i<=x;i++)
    {
       cin>>n;
       instert_At_tail(head,n);
    }
    display(head);

    cout<<endl;

        instert_At_tail(head,7);
        instert_At_tail(head,8);

        display(head);
    
}
