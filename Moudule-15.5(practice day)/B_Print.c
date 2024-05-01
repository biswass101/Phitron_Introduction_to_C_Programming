#include<stdio.h>
void printN(int n)
{
    for(int i= 1; i <= n; i++) printf("%d ", i);
    printf("\n");
}
int main()
{
    int n; scanf("%d", &n);
    printN(n);
    return 0;
}