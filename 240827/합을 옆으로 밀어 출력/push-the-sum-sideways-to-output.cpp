#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n1 = 0;
	int n2 = 0;
	cin >> n1;
	string* arr = new string[n1];

	for (int i = 0; i < n1; i++)
	{
		int temp;
		cin >> temp;
		n2 += temp;
	}

	for (int i = 0; i < n1; i++)
	{
		arr[i] = to_string(n2)[i];
	}

	for (int i = 1; i < n1 - 1; i++)
	{
		cout << arr[i];
	}

	cout << arr[0];
}