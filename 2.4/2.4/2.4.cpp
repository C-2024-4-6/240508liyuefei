#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "����������Ҫ���������";
	cin >> a >> b;
	cout << "���������㷽��";
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
			cout << "��ĸ����Ϊ0,��������";
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
		cout << "������Ƿ�";
		break;
	}


}