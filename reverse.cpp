#include<iostream>
using namespace std;
int main(){
    int num,r,temp,reverse=0;
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        reverse=reverse*10+r;
        temp=temp/10;

    }
    cout<<reverse;
}