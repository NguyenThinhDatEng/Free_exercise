#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int m, n; // the number of rows and columns

void output2DArr(int a[][100], int m, int n) // display 2D Array on screen
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%3d", a[i][j]);
		puts("");
	}
}

void readFile(int a[][100], int *m, int *n) // read data from file into array
{
	FILE* f = fopen("D://NguyenThinhDatSci//Free_exercise//NumberBiggerAround.txt", "r");
	fscanf(f, "%d%d", m, n); // read the number of rows into m, the number of columns into n

	for (int i = 0; i < *m; i++) // read data into array
		for (int j = 0; j < *n; j++)
			fscanf(f, "%d", &a[i][j]);
	fclose(f); // close file
}

bool compare(int a[][100], int i, int j) { // to compare a[i][j] with surrounding elements
	
	// the number is not on the side of Array 
	int rowIndex = i - 1; // rowIndex is the index to the left of a[i][j] on the row i
	int columnIndex = j - 1; // columnIndex is the index of the above of a[i][j] on the column j

	// the number is on the side of array
	if (i == 0)
	{
		rowIndex = 1;
		if (j == 0)
			columnIndex = 1;
		else
			columnIndex = j - 1;
	}
	else
		if (i == m - 1)
		{
			rowIndex = i - 1;	
			if (j == 0)
				columnIndex = 1;
			else
				columnIndex = j - 1;
		}
		else
			if (j == 0)
			{
				columnIndex = 1;
				rowIndex = i - 1;
			}
			else
				if (j == n - 1)
				{
					columnIndex = j - 1;
					rowIndex = i - 1;
				}
	for (; rowIndex <= i + 1; rowIndex += 2)
	{
		if (a[i][j] <= a[rowIndex][j]) return false;
		if (i == m - 1) break; // Only do it once
	}
	for (; columnIndex <= j + 1; columnIndex += 2)
	{
		if (a[i][j] <= a[i][columnIndex]) return false;
		if (j == n - 1) break; // Only do it once
	}
	return true;
}

void findNumberBiggerAround(int a[][100], int m, int n)
{
	int count = 0; // to count the number of numbers found
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (compare(a, i, j))
			{
				count++;
				printf("%d ", a[i][j]);
				if (j != n - 1) j++; // don't consider a[i][j + 1]
			}
		}
	printf("\n%d", count);
}

int main()
{
	int a[100][100];
	readFile(a, &m, &n);
	output2DArr(a, m, n);
	findNumberBiggerAround(a, m, n);
	return 0;
}