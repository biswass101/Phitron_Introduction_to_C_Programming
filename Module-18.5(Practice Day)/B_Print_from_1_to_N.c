#include<stdio.h>
void printN(int i, int n)
{
    if(i == n + 1) return;
    printf("%d\n", i);
    printN(i + 1, n);
}
int main()
{
    int n; scanf("%d", &n);
    printN(1, n);
    return 0;
}