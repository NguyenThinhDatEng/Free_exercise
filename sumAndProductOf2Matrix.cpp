#include<stdio.h>
#include<stdlib.h>

void initialize2DArray(int*** a, int n)
{
	*a = (int**)malloc(sizeof(int*) * (n));
	for (int i = 0; i < n; i++)
	{
		(*a)[i] = (int*)malloc(sizeof(int) * (n));
	}
}

void input2DArray(int** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}
}

void showArr(int** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		puts("");
	}
}

void free2DArr(int*** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		free((*a)[i]);
	}
	free(*a);
}

void sumOf2Matrix(int** a, int** b, int n)
{
	int** c;
	initialize2DArray(&c, n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			c[i][j] = a[i][j] + b[i][j];
	showArr(c, n);
	free2DArr(&c, n);
}

void productOf2Matrix(int **a, int **b, int n)
{
	int** c;
	initialize2DArray(&c, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				c[i][j] += a[i][k] * b[k][j];
	showArr(c, n);
	free2DArr(&c, n);
}

int main()
{
	int n;
	int** a, ** b;
	scanf("%d", &n);
	initialize2DArray(&a, n);
	initialize2DArray(&b, n);
	input2DArray(a, n);
	input2DArray(b, n);
	sumOf2Matrix(a, b, n);
	productOf2Matrix(a, b, n);
	free2DArr(&a, n);
	free2DArr(&b, n);
	return 0; 
}