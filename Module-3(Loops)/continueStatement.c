#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i <= n; i++)
    {
        if(i == 2) continue;;
        printf("%d\n", i);
    }
    return 0;
}