#include<iostream>
#include"mytriangle.h"
using namespace std;
double side1, side2, side3;
int main()
{
	cin >> side1 >> side2 >> side3;
	cout << is_valid(side1, side2, side3) << endl;
	if (is_valid(side1, side2, side3) == 1)
		cout << _area(side1, side2, side3) << endl;
	else
		cout << "你的输入不合法" << endl;
}
