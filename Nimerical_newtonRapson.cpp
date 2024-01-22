#include<iostream>
using namespace std;

double function(double a)
{
    return a*a-3*a+2;
}
double derivation(double a)
{
   return 2*a-3;
}
void newtonRapson(double a)
{
    double x=function(a)/derivation(a);
    int iteration;
    cout<<"enter number of iteragtion :";
    cin>>iteration;

     for(int i=1;i<=1;i++)
    {
        x=function(a)/derivation(a);
        a=a-x;
        cout<<"the value of the root  of 1st iteration is :"<<a<<endl;

    }
                                                                                                                                                                                        

     for(int i=2;i<=2;i++)
    {
        x=function(a)/derivation(a);
        a=a-x;
        cout<<"the value of the root  of 2nd iteration is :"<<a<<endl;

    }
    
      for(int i=3;i<=3;i++)
    {
        x=function(a)/derivation(a);
        a=a-x;
        cout<<"the value of the root  of 3rd iteration is :"<<a<<endl;

    }



    for(int i=4;i<=iteration;i++)
    {
        x=function(a)/derivation(a);
        a=a-x;
        cout<<"the value of the root  of "<<i<<"th iteration is :"<<a<<endl;

    }
    //  cout<<"the value of the root is :"<<a;

}
int main()
{ 
    int a;
    cout<<"enter assume value :";
    cin>>a;
    newtonRapson(a);
    
}