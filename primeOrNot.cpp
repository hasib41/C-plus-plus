#include<iostream>
using namespace std;

int primeOrNot(int n1){
    
   for(int i=2;i<n1;i++)
   {
    if(n1%i==0)
    return false;

   }
   return true;

}
int main(){
    int n,n1;
    cout<<"enter a number :"<<endl;
    cin>>n>>n1;
    for(int i=n;i<=n1;i++)
    {
        cout<<primeOrNot(i);
    }

}