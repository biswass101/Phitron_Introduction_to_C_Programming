#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int o = 0, e = 0, p = 0, neg = 0;
    for(int i = 0; i < n; i++)
    {
        int x; scanf("%d", &x);
        if(x % 2 == 0) e++;
        if(x % 2 != 0) o++;
        if(x < 0) neg++;
        if(x > 0) p++;

    }
    printf("Even: %d\n", e);
    printf("Odd: %d\n", o);
    printf("Positive: %d\n", p);
    printf("Negative: %d\n", neg);
    return 0;
}