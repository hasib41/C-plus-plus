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
int main(){
    int data;
    cin>>data;
    node* newNode = new node(data);
    cin>>data;
    node* newNode2 = new node(data);
    newNode->next=newNode2;
    node* temp=newNode;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    //cout<<newNode->data;


}