#include<stdio.h>
long long int getFact(int n)
{
    if(n == 0) return 1;
    long long int myRes = n;
    return myRes * getFact(n - 1);
}
int main()
{
    int n; scanf("%d", &n);
    printf("%lld", getFact(n));
    return 0;
}