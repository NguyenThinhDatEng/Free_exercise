#include<stdio.h>

void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void sort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j]) swap(&a[i], &a[j]);
	for (int i = 0; i < n; i++)
		printf(" %d", a[i]);
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[10000];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, n);
	return 0;
}