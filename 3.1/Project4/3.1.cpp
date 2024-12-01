#include<iostream>
using namespace std;
int alg(int a, int b)
{
	int M= a > b ? a : b;
	int m= a < b ? a : b;
	for (int c=1;c!=0;)
	{
		c = M % m;
	M = m;
	m = c;
	}
	return M;
}
int blg(int a, int b)
{
	int M = a > b ? a : b;
	int m = a < b ? a : b;
	for (int i = 1;; i++)
	{
		for (int j = 1;j*m<=M*i; j++)
		{
			if (j* m == M * i)
				return j * m;
		}
	}
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << alg(m, n) << endl;
	cout << blg(m, n) << endl;
}