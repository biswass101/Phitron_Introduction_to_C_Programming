#include<stdio.h>
int main()
{
    int a, b; scanf("%d %d", &a, &b);
    int r = (a - b) / 2;
    printf("%d %d\n", r + b, r);
    return 0;
}