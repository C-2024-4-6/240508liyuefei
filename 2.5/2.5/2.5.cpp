#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
	string zz;
	cout << "请输入一行字符";
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
	cout <<"字母"<< a << endl;
	cout << "空格"<<b << endl;
	cout <<"数字"<< c << endl;
	cout <<"其他"<< d << endl;

}