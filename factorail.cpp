#include<iostream>
using namespace std;
int fact=1;
int factorial(int n)
{
    for(int i=2;i<=n;i++)
    fact=fact*i; 
    return fact;   
}

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    factorial(n);

}
