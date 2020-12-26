#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[100];
	int i;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", a + i);
		sum += a[i];
	}
	int sumbf = a[0];
	for (i = 1; i < n - 1; i++)
	{
		if (sum - sumbf - a[i] == sumbf)
		{
			printf("%d", i);
			break;
		}
		sumbf += a[i];
	}
	if (i == n - 1) printf("-1");
	return 0;
}