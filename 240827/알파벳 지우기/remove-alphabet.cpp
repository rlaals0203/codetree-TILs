#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
	string str1, str2, s1, s2;
	int n1, n2;

	getline(cin, str1);
	getline(cin, str2);

	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] >= 48 && str1[i] < 58)
		{
			s1 += str1[i];
		}
	}

	for (int i = 0; i < str2.size(); i++)
	{
		if (str2[i] >= 48 && str2[i] < 58)
		{
			s2 += str2[i];
		}
	}

	n1 = stoi(s1);
	n2 = stoi(s2);

	cout << n1 + n2;
}