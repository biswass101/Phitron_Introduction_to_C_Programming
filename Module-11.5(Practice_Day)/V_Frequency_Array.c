#include<stdio.h>
int main()
{
    int n, m; scanf("%d %d", &n, &m);
    int cnt[100001] = {0};
    while(n--)
    {
        int x; scanf("%d", &x);
        cnt[x]++;
    }

    for(int i = 1; i <=m; i++)
    {
        printf("%d\n", cnt[i]);
    }
    return 0;
}