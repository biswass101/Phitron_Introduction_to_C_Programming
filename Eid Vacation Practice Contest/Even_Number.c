#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int x = (n - 20) / 5;
    printf("%d %d %d %d %d\n", x, x + 2, x + 4, x+6, x+8);
    return 0;
}