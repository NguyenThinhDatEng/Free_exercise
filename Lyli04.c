#include<stdio.h>

int main()
{
    int N;
    int sign = 1;
    scanf("%d", &N);
    do
    {
        if (N % 10 % 2 == 0)
        {
            sign = 0;
            break;
        }
        N /= 10;
    } while (N > 0);
    if (sign) printf("YES");
    else
        printf("NO");
    return 0;
}