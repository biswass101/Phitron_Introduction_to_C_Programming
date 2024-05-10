#include<stdio.h>
void printRec(int n)
{
    if(n == 0) return;
    printf("I love Recursion\n");
    printRec(n -1);
}
int main()
{
    int n; scanf("%d", &n);
    printRec(n);
    return 0;
}