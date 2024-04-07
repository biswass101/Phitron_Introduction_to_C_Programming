#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int x = (n - 12) / 4;
    printf("%d %d %d %d\n", x, x + 2, x + 4, x + 6);
    return 0;
}