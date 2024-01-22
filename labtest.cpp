
#include <bits/stdc++.h>
using namespace std;

float f(float x)
{
	float f = pow(x, 3) + x - 1;
	return f;
}
void secant(lower_limit,uper_limit, iteration)
{
	float n = 0,lower_limit,uper_limit, c,x0,iteraton;
	if (f(x1) * f(x2) < 0) {
		do {
			x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
			c = f(x1) * f(x0);
			x1 = x2;
			x2 = x0;
			n++;
			if (c == 0)
				break;
			xm = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
		} while (fabs(xm - x0) >= iteration); 

		cout << "Root =" << x0 << endl;is
		cout << "Number  of iterations = " << n << endl;
	} else
		cout << "Can not find root";
}
int main()
{   

   int higest_power, coifficient,lower_limit,uper_limit,iteration,error;
   cout<<"enter the highest power of x";
   cin>>higest_power;
    cout<<"enter coifficient :";
   cin>> c;
   cout<<"enter the lower limit :";
   cin>>lower_limit;
   cout<<"enter the uper limit :";
   cin>>uper_limit;
   cout<<"enter number of iteration :";
   cin<<iteration;

    f(higest_power);

	secant(lower_limit,uper_limit, iteration);
	return 0;
}
