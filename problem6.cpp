#include<bits/stdc++.h>

using namespace std;
int main(){

    int n,n1,n2,pos,arr2;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    cout<<"enter the position:";
    cin>>n1;
    cout<<"enter the new input :";
    cin>>n2;
    arr2=arr[n+1];
    for(int i=n;i<pos;i--)
    {
        arr2=arr[i];
    }
    arr2[pos]=n1;
    for(int i=0;i<n+!;i++)
    {
       cout<<arr[i];
    }
    






}