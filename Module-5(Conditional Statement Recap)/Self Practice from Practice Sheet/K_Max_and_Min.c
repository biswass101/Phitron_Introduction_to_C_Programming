#include<stdio.h>
int main()
{
    int min = 100001;
    int max = -100001;
    for(int i = 0; i < 3; i++)
    {
        int n; scanf("%d", &n);
        if(n < min) min = n;
        if(n > max) max = n;
    }
    printf("%d %d\n", min, max);
    return 0;
}