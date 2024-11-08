#include<iostream>
using namespace std;
int main()
{
	double a,x,y;
	cin >> a;
	if (a < 0)
	{
		int b = abs(a);
		for (x = b;;)
		{

			y = (x + b / x) / 2;
			long double M = (x > y ? x : y);
			long double m = (x < y ? x : y);
			long double n = M - m;
			if (n < 1.e-10)
			{
				cout << y<<"i"<<endl;
				return 0;
			}
			else {
				x = y;
			}
		}
	}
	else
	{
		for (x = a;;)
		{

			y = (x + a / x) / 2;
			long double M = (x > y ? x : y);
			long double m = (x < y ? x : y);
			long double n = M - m;
			if (n < 1.e-10)
			{
				cout << y;
				return 0;
			}
			else {
				x = y;
			}
		}
	}
	return 0;
}