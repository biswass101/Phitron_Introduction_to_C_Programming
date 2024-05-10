#include<stdio.h>
void printN(int i)
{
    if(i == 0) return;
    printf("%d\n", i);
    printN(i-1);
}
int main()
{
    printN(5);
    return 0;
}