#include<stdio.h>
void printREv(int n)
{
    if(n == 0) return;
    if(n == 1)
    {
        printf("%d", n);
        return;
    }
    printf("%d ", n);
    printREv(n - 1);
}
int main()
{
    int n; scanf("%d", &n);
    printREv(n);
    return 0;
}