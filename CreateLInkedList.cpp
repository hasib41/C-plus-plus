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

void CreateNode(node *&head,int data){
    node* newNode = new node(data);
    if(head=NULL)
    {
        head==newNode;
        return;
    }
    node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;

}

void display(node* head){
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}

int main(){
   node* head= NULL;
   int n;
   cout<< "how many nodes you wanna create :";
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int x;
    cout<<"enter data :";
    cin>>x;
    CreateNode(head,x);

   }
   display(head);


}