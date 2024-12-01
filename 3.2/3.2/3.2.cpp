#include<iostream>
#include<math.h>
using namespace std;
bool is_prime(int num)
{
	if (num < 5)
	{
		for (int i = sqrt(num); i > 1; i--)
		{
			if (num % i == 0)
				return false;
		}
		return true;
	}
	else if (num % 6 == 1 || num % 6 == 5)
	{
		for (int i = sqrt(num); i > 1; i--)
		{
			if (num % i == 0)
				return false;
		}
		return true;
	}
	else
		return false;
}
int main()
{
	int num1,num2=1;
	cin>> num1;
	cout << is_prime(num1) << endl;
	for (int i=1;i<21; i++)
	{
		for (int j = 1; j < 11;)
		{
			if (is_prime(num2) == 1)
			{
				j++;
				cout << num2 << '\t';
			}
			num2++;
		}
		cout << '\n';
	}

}