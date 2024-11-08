#include<iostream>
using namespace std;
int main()
{
	int j;
	for (j = 1; j < 6; j++)
	{
		int k = j;
		while (k!= 0)
		{
			cout << '*' ;
			k--;
		}
		cout << '\n';
		cout << '\n';
	}
	return 0;
}