#include<iostream>
using namespace std;
int main()
{
	double x, y;
	int num = 1;
	while (num < 5)
	{
		num++;
		cout << "x��ֵΪ";
		cin >> x;
		if (0 < x && x < 1)
		{
			y = 3 - 2 * x;
			cout << "yΪ" << y << endl;
		}
		else if (1 <= x && x <= 5)
		{
			y = 1 + 2 * x / 4;
			cout << "yΪ" << y << endl;
		}
		else if (5 <= x && x <= 10)
		{
			y = x * x;
			cout << "yΪ" << y << endl;
		}
	}

	return 0;
}
