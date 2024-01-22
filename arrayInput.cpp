#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,sum=0;
    float avg;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
     for(int i=0;i<n;i++)
    {
        avg=sum/n;
    }
    cout<<sum<<" ";
    cout<< avg;

       

   
}