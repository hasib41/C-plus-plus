#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      cout<<arr[i]<<" ";
    }
    // cout<<arr[i];
    int MaxNUM = INT_MIN;
    int MInNUM= INT_MAX;
    for(int i=0;i<n;i++){
    If(arr[i]>MaxNUM)
    MaxNUM=arr[i];
    cout<<arr[i];
    }
}