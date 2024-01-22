
#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
	return x*x*x - x*x + 2;
}
double derivFunc(double x)
{
	return 3*x*x - 2*x;
}

void newtonRaphson(double x)
{
	double h = func(x) / derivFunc(x);
    int i;
    cout<<"enter how many iterations :";
    cin>>i;
	while (i--)
	{
		h = func(x)/derivFunc(x);
		x = x - h;
	}

	cout << "The value of the root is : " << x;
}

int main()
{
	double a;
    cout<<"enter assume value :";
    cin>>a;
	newtonRaphson(a);
	return 0;
}
