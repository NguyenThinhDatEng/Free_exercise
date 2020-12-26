#include<stdio.h>

int main()
{
	int a[100];
	int n;
	double sum = 0, aver = 0;
	int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", a + i);
		if (a[i] > 0) sum += a[i];
		else
		{
			aver += a[i];
			count++;
		}
	}
	if (count)
		if (sum)
			printf("%lf %lf", aver / count, sum);
		else
			printf("%lf 0", aver / count);
	else
		printf("0 %lf", sum);
	return 0;
}