#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data ;
    node *next;
};

int main()
{
    int i,n;
    cout << "Enter number of node : ";
    cin >> n;

    node *tptr,*nptr,*fptr;
    fptr = NULL;

    for(i=0;i<n;i++)
    {
        nptr = new (node);
       cin >>  nptr->data;
       nptr->next  = NULL;
       if(fptr==NULL)
       {
           fptr = nptr;
           tptr = nptr;
       }
       else
       {
           tptr->next = nptr;
           tptr = tptr->next;
       }
    }
    tptr = fptr;
    for(i=0;i<n;i++)
    {
        cout << tptr->data << " ";
        tptr= tptr->next;
    }
    return 0;
}