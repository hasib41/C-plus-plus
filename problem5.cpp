#include<bits/stdc++.h>

using namespace std;
int main(){

    int n,n1;
    cout<<"enter the size of 1st array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of 1st array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the size of 2nd array :";
    cin>>n1;
    int arr1[n];
    cout<<"enter the elements of 2nd array:";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    int arr2[n+n1];
    merge(arr,arr+n,arr1,arr1+n1,arr2);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
      for(int i=0;i<n1;i++)
    {
        cout<<arr1[i]<<endl;
    }
    cout<<endl;
      for(int i=0;i<n+n1;i++)
    {
        cout<<arr2[i]<<endl;
    }
}
