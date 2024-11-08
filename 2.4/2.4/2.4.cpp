#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "请输入两个要运算的数字";
	cin >> a >> b;
	cout << "请输入运算方法";
	cin >> c;
	switch (c)
	{
	case('+'):
		cout << a + b << endl;
		break;
	case('-'):
		cout << a - b << endl;
		break;
	case('*'):
		cout << a * b << endl;
		break;
	case('/'):
		if (b == 0)
		{
			cout << "分母不能为0,不能运算";
			return 0;
		}
		else
		{
			double c =(double) a / (double)b;
			cout <<c<< endl;
		}
		break;
	case('%'):
		cout << a % b << endl;
	default:
		cout << "运算符非法";
		break;
	}


}