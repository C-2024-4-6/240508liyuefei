#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	if (a == 0 || b == 0)
	{
		cout <<"���Լ����"<<(a == 0 ? b : a) << endl;
		cout << "��С��������" << 0 << endl;
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
		cout << "���Լ����" << M<<endl;
		while (a != b)
		{
			a += a;
			while ((a != b) && (b < a))
			{
				b += b;
			}
		}
		cout << "��С��������" << a<< endl;
		
	}
}