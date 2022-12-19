#include <stdio.h>

int main()
{
    // Khai báo số nguyên dương n
    int n;
    // Nhập n là số có 3 chữ số
    scanf("%d", &n);
    // Lấy ra chữ số hàng trăm
    int a = n / 100;
    // Lấy ra chữ số hàng chục
    n = n % 100;
    int b = n / 10;
    // Lấy ra chữ số hàng đơn vị
    n = n % 10;
    int c = n;
    // In ra chữ số hàng trăm, hàng chục, hàng đơn vị
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}