#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
	string str1, str2, s1, s2;
	getline(cin, str1);
	getline(cin, str2);

	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] == ' ')
			continue;

		s1 += str1[i];
	}

	for (int i = 0; i < str2.size(); i++)
	{
		if (str2[i] == ' ')
			continue;

		s2 += str2[i];
	}

	cout << s1;
	cout << s2;
}