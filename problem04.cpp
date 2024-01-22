#include<iostream>
using namespace std;
int main(){

    int n,sum1=0,sum2=0;
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
        if(i%2==0)
        {
            sum1=sum1+arr[i];
        }
    }
     for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum2=sum2+arr[i];
        }
    }
    cout<<"sum of even indices="<<sum1<<endl;
    cout<<"sum of even indices="<<sum2;


}