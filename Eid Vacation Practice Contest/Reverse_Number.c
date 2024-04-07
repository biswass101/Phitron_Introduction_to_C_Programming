#include<stdio.h>
int main()
{
    int a; scanf("%d", &a);
    
    int d1 = a % 10;
    a /= 10;
    int d2 = a % 10;
    a /= 10;
    int d3 = a % 10;
    a /= 10;
    int d4 = a % 10;
    a /= 10;

    int ans = d1 * 1000 + d2 * 100 + d3 * 10 + d4 * 1;
    printf("%d\n", ans);
    return 0;
}