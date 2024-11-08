#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	int a=2,j=2;
		for (; j < 100;)
		{
			i++;
			j += j;
			a += j;

		}
		a -= j;
		i--;
		double b = (a * 0.8 / i);
		cout << "每天平均花" << b << endl;

		return 0;
}

