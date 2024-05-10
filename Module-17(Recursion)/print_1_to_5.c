#include<stdio.h>
void printN(int i)
{
    if(i > 5) return;
    printf("%d\n", i);
    printN(i + 1);
}
int main()
{
    printN(1);
    return 0;
}