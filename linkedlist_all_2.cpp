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


    void insert_At_Tail(node*&head,int data)
    {
        node* newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }



void insert_At_Head(node*& head,int data)
{
    node* newnode= new node(data);
    newnode->next=head;
    head=newnode;
}
// void deletion_at_tail(node*head)
// {
//    node*temp=head;
//    while(temp->next!=NULL)
//    {
//      temp=temp->next;
//    }
//    node* todelete=temp;
//    delete todelete;
// }
  


void delete_(node*& head,int key)
{
   node* temp=head;
   node* todelete;
   if(head->data==key)
   {
        todelete=head;
        head=head->next;
        delete todelete;
        return;
   }
   while(temp->next->data!=key)
   {
     temp=temp->next;
   }
   todelete=temp->next;
   temp->next=todelete->next;
   delete todelete;

}


// void delete_At_specific_position(node* head,int pos)
// {
    
// }
// void reverse(node*&head)
// {
//     node* previous=NULL;
//     node*next=NULL;
//     node* current;
//     current=head;
//     while(current!=NULL)
//     {
//         next=current->next;
//         current->next=previous;
//         previous=current;
//         current=next;
        
//     }
//     head=previous;
// }

void reverse(node* &head)
{
    node* current=head;
    node* previous=NULL;
    node* next;

    while(current!=NULL)
    {
        next=current->next;
        current->next=previous;
        
         previous=current;
        current=next;
       

    }
    head=previous;
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
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    
}


int main(){

    node* head=NULL;
    int n,x;
    cout<<"enter how many nodes u want to connect :";
    cin>>n;
    cout<<"enter data :";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert_At_Tail(head,x);
    }
    display(head);
    cout<<endl;
    

    int y;
    cout<<"enter the value u want to add at head :";
    cin>>y;
    insert_At_Head(head,y);
    display(head);
    cout<<endl;

//    cout<<"after deletion at tail :";
//    deletion_at_tail(head);
//    display(head);
//    cout<<endl;
    

    int key;
    cout<<"enter the value u want to delete :";
    cin>>key;
    delete_(head,key);
    display(head);
    cout<<endl;

    // int pos;
    // cout<<"enter the position u want to delete :";
    // cin>>pos;

    
    reverse(head);
    cout<<"after reverse : ";
    display(head);
    cout<<endl;

   node* hasib=recursively_reverse(head);
   cout<<"after recersively reverse :";
   display(hasib);
}