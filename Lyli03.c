#include<stdio.h>

int main()
{
	int n;
	double aver = 0;
	int a[10];
	int count = 0;
	do
	{
		scanf("%d", &n);
	} while (n < 1 || n > 10);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", a + i);
		if (a[i] % 5 == 0 && a[i] % 10 != 0) 
		{
			aver += a[i];
			count++;
		}
	}
	if (!count) printf("0");
	else
		printf("%lf", aver / count);
	return 0;
}