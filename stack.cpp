#include<iostream>
using namespace std;
#include<stack>
class stack{

    public:
    int* arr;
    int top;
    int size;
    stack(int size)
    {   
        this -> size=size;
        arr=new int[size];
        top=-1;
    }


void push(int element)
{
    if(size - top>1)
    {
        top++;
        arr[top]=element;
    }
    else{
        cout<<"stack overflow :("<<endl;
    }
}

void pop()
{
    if(top>=0)
    {
        top--;
    }

    else{
        cout<<stack underFlow<<endl;
    }
}

int  top()
{
    if(top>=0)
    {
        return arr[top];
    }
    else{
        // cout<<"stack is empty :"<<endl;
        return -1;
    }
}
bool isEmpty()
{
    if(top==-1)
    {   
        cout<<"stack is not empty :"<<endl;
        return true;
    }
    else{
        cout<<"stack is empty :"<<endl;
        
    }
}
};

int main()
{
    // int aa,size;
    stack aa(5);


    aa.push(22);
    aa.push(10);

    aa.pop(22);
    cout<< aa.top()<<endl;
}