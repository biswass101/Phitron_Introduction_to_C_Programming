#include<stdio.h>
int main()
{
    long long int n; scanf("%lld", &n);
    long long int ans = (n*(n+1)) / 2;
    printf("%lld\n",ans);
    return 0;
}