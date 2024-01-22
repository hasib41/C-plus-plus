#include<iostream>
using namespace std;

void fibonacci(int n){
    int n1=0,n2=1,nextTerm;
    for(int i=0;i<=n;i++)
    {
        nextTerm=n1+n2;
        n1=n2;
        n2=nextTerm;
        cin>>nextTerm;
    }
}
int main(){
    int n;
  cout<<"enter a number :";
  cin>>n;
  fibonacci(n);

}


