#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cout << "�����������ε������߳�";
	cin >> a >> b >> c;
	if (a + b > c &&a + c > b && b + c > a)
	{
		d = a + b + c;
		cout << "�����ε��ܳ�Ϊ" << d << endl;
		if (a == b || b == c || a == c)
		{
			cout << "���������ǵ���������" << endl;
		}
		else {
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else {
		cout << "�ⲻ��һ��������" << endl;
	}

}