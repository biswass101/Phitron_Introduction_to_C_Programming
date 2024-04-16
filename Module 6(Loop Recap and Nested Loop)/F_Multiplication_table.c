#include<stdio.h>
int main()
{
    int tab; scanf("%d", &tab);
    for(int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", tab, i, tab*i);
    }
    return 0;
}