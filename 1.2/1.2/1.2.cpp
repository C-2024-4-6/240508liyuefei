#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "圆锥底的半径";
	cin >> a;
	cout << "圆锥的高";
	cin >> b;
	const double pi = 3.14;
	double c = pi * a * a * b / 3;
	cout << "圆锥的体积" << c << endl;
	return 0;
}