#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
	string zz;
	cout << "������һ���ַ�";
	getline(cin, zz);
	int a = 0, b = 0, c = 0, d = 0;
	char ch;
	for (int i = 0;i<zz.length(); i++)
	{
		ch = zz[i];
		if(('a'<=ch&&ch<='z')||('A'<=ch&&ch<='Z'))
		{
			a++;
			
		}
		else if (isspace(static_cast<unsigned char>(ch)))
		{
			b++;
		
		}
		else if ('0' <= ch&&ch <= '9')
		{
			c++;
		
		}
		else
		{
			d++;
		
		}
	}
	cout <<"��ĸ"<< a << endl;
	cout << "�ո�"<<b << endl;
	cout <<"����"<< c << endl;
	cout <<"����"<< d << endl;

}