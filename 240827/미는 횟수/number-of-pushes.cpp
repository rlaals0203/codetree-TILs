#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1, str2;
	int count = 0;
	bool isImpossible = false;

	cin >> str1 >> str2;

	string temp = str1;

	while (str1 != str2)
	{
		temp[0] = str1[str1.size() - 1];
		for (int i = 1; i < str1.size(); i++)
		{
			temp[i] = str1[i - 1];
		}

		for (int i = 0; i < str1.size(); i++)
		{
			str1[i] = temp[i];
		}

		count++;

		if (count > str1.size())
		{
			isImpossible = true;
			cout << -1;
			break;
		}
	}

	if (!isImpossible)
		cout << count;
}