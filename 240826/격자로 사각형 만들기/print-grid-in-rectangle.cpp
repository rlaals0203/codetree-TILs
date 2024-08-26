#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int** arr = new int*[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || j == 0)
			{
				arr[i][j] = 1;
				cout << arr[i][j] << " ";
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1] + arr[i - 1][j - 1];
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
}