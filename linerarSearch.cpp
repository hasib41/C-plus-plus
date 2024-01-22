#include<iostream>
using namespace std;
int n,x;
int linearSearch(int arr[],int size,int key){
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
         x=arr[i];
        return x;
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the number u wanna search :";
    cin>>key;
    linearSearch(arr,n,key);
    cout<<x;


}