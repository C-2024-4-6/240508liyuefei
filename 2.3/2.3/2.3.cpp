#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cout << "请输入三角形的三条边长";
	cin >> a >> b >> c;
	if (a + b > c &&a + c > b && b + c > a)
	{
		d = a + b + c;
		cout << "三角形的周长为" << d << endl;
		if (a == b || b == c || a == c)
		{
			cout << "此三角形是等腰三角形" << endl;
		}
		else {
			cout << "此三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "这不是一个三角形" << endl;
	}

}