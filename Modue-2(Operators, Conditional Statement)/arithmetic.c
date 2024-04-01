#include<stdio.h>
int main()
{
    int a, b; scanf("%d %d", &a, &b);
    int addition = a + b;
    int mlt = a * b;
    int div = a / b;
    int minus = b - a; // b > a

    int mod = b % a; //remainder
    printf("%d", a + b);
    return 0;
}