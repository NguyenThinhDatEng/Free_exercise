#include<stdio.h>
int n = 10;


int main()
{
	int i = 1, j = 1;
	while (i <= n)
	{
		// dong dau va dong cuoi (2 dong nay khac quy luat chung)
		if (i == 1 || i == n)
		{
			for (int j = 1; j <= n; j++)
			{
				printf(" * ");
			}
			puts("");
		}
		else
		{
			// TH n le
			if (n % 2)
			{
				// P1: tu 1 den n / 2 + 1
				if (i <= n / 2 + 1)
					// chay j de dien het cac o trong la * hoac ' '
					for (int j = 1; j <= i + n - 1; j++)
					{
						// dien * tai vi tri j = i
						// theo quy luat 2 dau * cung 1 hang cach nhau n - 2 khoang ' ', dien dau * tiep theo vao vi tri n - 1
						if (j == i || j == i + n - 1) printf(" * ");
						else
							printf("   ");
					}
				else
					// P2: con lai
					for (int j = 1; j <= i + n - 1; j++)
					{
						// j = 2 * n - 1 là vi j = (n - i + 1) + n - 1
						if (j == n - i + 1 || j == 2 * n - i) printf(" * ");
						else
							printf("   ");
					}
			}
			else
				if (i <= n / 2)
					for (int j = 1; j <= i + n - 1; j++)
					{
						if (j == i || j == i + n - 1) printf(" * ");
						else
							printf("   ");
					}
				else
					for (int j = 1; j <= i + n - 1; j++)
					{
						if (j == n - i + 1 || j == 2 * n - i) printf(" * ");
						else
							printf("   ");
					}
			puts("");
		}
		i++;
	}
	return 0;
}