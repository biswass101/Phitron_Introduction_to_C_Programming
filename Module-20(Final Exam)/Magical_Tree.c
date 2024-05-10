#include<stdio.h>
#include<limits.h>
int main()
{
    int n; scanf("%d", &n);
    int sample_n = 1;
    int res = 6;
    int dif = abs(n - sample_n) / 2;
    int line = res + dif;
    int l = 5;
    int space = line - 1;
    int s= 5;
    int k = 1;
    for(int i = 1; i <= line; i++)
    {
        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        k += 2;
    }
    for(int i = 1; i <= l; i++)
    {
        for(int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}