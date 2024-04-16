#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int mx = 0;
    for(int i = 0; i < n; i++)
    {
        int x; scanf("%d", &x);
        if(x > mx) mx = x;
    }
    printf("%d\n", mx);
    return 0;
}