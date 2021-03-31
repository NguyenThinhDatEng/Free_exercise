#include <iostream>

using namespace std;

void enterArr(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void showArr(int a[], int i, int j)
{
	for (int k = i; k <= j; k++)
	{
		cout << a[k] << " ";
	}
}

void subsequenceOfArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			showArr(a, i, j);
			cout << endl;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int* a;
	a = new int[n];
	enterArr(a, n);
	subsequenceOfArray(a, n);
	return 0;
}