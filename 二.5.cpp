#include<iostream>
using namespace std;
int main()
{
	char c;
	int e = 0;//Ӣ����ĸ����
	int num = 0;//�����ַ�����
	int s = 0;//�ո����
	int oth = 0;//�����ַ�����
	cout << "Please enter a line of characters:" << endl;
	cin.get(c);
	while (c != '\n')
	{
		if ((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))
		{
			e++;
		}
		else if (c >= '0' && c <= '9')
		{
			num++;
		}
		else if (c == ' ')
		{
			s++;
		}
		else
		{
			oth++;
		}
		cin.get(c);
	}
	cout << "The number of letters in English is:" << e << endl;
	cout << "The number of numeric characters is:" << num << endl;
	cout << "The number of Spaces is:" << s<< endl;
	cout << "The number of other characters is:" << oth << endl;
}

