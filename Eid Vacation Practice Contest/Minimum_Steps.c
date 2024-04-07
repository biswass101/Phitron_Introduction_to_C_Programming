#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int ans = n / 3;
    if(n % 3 != 0) ans = ans + 1;
    printf("%d\n", ans);
    return 0;
}