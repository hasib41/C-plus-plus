#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    // node(int val){
    //     data=val;
    //     next=NULL;
    // }
};
void InsertAtTail(node* &head,int data)
{
    node* newNode=new node();
    newNode->data=data;
    newNode->next=NULL;
    node *temp=head;
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void display (node* head)
{
    node* temp=head;
        while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }


}

int main(){
node *head=NULL;
  int n,x;
  cout<<"how many nodes u wanna connect";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    InsertAtTail(head,x);
  }
  display(head);

}