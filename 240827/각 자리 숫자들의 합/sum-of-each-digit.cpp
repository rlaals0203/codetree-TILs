#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
	string s1 = " ";
	int n = 0;
	int result = 0;
	cin >> n;

	s1 = to_string(n);
	
	for (int i = 0; i < s1.size(); i++)
	{
		result += s1[i] - '0';
	}

	cout << result;
}