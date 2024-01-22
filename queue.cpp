#include<bits/stdc++.h>
using namespace std;
class node
{   
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
class queue
{   
    public:
    node* front;
    node* back;

    queue()
    {
        front=NULL;
        back=NULL;
    }
};

void push(int val)
{
    node* newNode=new node(val);
    if(front==NULL)
    {
        front=back=newNode;
        return;  
    }
    back->next=newNode;
    back=newNode;
}

void pop()
{
    node* delNode;
    if(front==NULL)
    {
        cout<<"queue underflow :(";
    }
    delNode=front;
    front=front->next;
    
    delete delNode;


}
int peek()
{
    if(front==NULL)
    {
        cout<<"queue underflow :(";
        return -1;
    }
    return front->data;
}
bool empty()
{
    if(front==NULL)
    {
        return true;
    }
    return false;
}
int main()
{
   queue q;
   q.push(1);
}