
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double c, f;
	cout << "�����¶�";
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << "�����¶�" <<fixed<<setprecision(2)<< c << endl;
	system("pause");
	return 0;
}