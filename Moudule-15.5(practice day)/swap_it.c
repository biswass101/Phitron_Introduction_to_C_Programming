#include<stdio.h>
void swap_it(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a, b; scanf("%d %d", &a, &b);
    swap_it(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}