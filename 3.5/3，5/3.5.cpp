#include<iostream>
using namespace std;
int i=10;
int quantity(int s)
{
	if (i == 1)
		return s;
	else
	s = ++s * 2;
	i--;
	return quantity(s);
}
int main()
{
	cout<<quantity(1)<<endl;
}