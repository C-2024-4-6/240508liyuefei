#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	if (a == 0 || b == 0)
	{
		cout <<"最大公约数是"<<(a == 0 ? b : a) << endl;
		cout << "最小公倍数是" << 0 << endl;
	}
	else
	{
		int c = 1;
		int M, m;
		M = (a > b ? a : b);
		m = (a < b ? a : b);
		while (c!= 0)
		{
			c = (M%m);
			M = m;
			m = c;
		}
		cout << "最大公约数是" << M<<endl;
		while (a != b)
		{
			a += a;
			while ((a != b) && (b < a))
			{
				b += b;
			}
		}
		cout << "最小公倍数是" << a<< endl;
		
	}
}