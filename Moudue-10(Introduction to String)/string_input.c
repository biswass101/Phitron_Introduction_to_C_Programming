#include<stdio.h>
int main()
{
    char a[6]; //wrong way windows allocate extra space
    scanf("%s", a);
    printf("%s\n", a);
    return 0;
}