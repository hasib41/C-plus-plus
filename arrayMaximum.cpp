// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n,arr[5];
//     cout<<"enter the size of array :";
//     cin>>n;
//     for(int i=0;i<5;i++)
//     {
//      cin>>arr[i];
//     }
//     int maxNum=INT_MIN;
//     int minNum=INT_MAX;

//     for(int i=0;i<5;i++)
//     {
//         if(arr[i]>maxNum)
//         {
//             maxNum=arr[i];
//         }
//         else if(arr[i]<minNum)
//         {
//             minNum=arr[i];
//         }
        
//     }
//     cout<<minNum<<" "<<maxNum<<endl;
// }

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
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
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            int max=arr[j];

        }
    }
    cout<<max;
}