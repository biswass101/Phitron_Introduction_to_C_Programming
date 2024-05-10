#include<stdio.h>
void printDigit(int n)
{
    if(n == 0) return;
    printDigit(n / 10);
    printf("%d ", n % 10);
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        int n; scanf("%d", &n);
        if(n  == 0) printf("%d", n);
        else printDigit(n);
        printf("\n");
    }
    return 0;
}