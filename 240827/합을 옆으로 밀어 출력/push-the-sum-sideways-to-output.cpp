#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n1 = 0;
	int n2 = 0;
	cin >> n1;

	for (int i = 0; i < n1; i++)
	{
		int temp;
		cin >> temp;
		n2 += temp;
	
	}

	int n3 = to_string(n2).size();

	string* arr = new string[n3];

	for (int i = 0; i < n3; i++)
	{
		arr[i] = to_string(n2)[i];
	}

	for (int i = 1; i < n3; i++)
	{
		cout << arr[i];
	}

	cout << arr[0];
}