#include<stdio.h>
int sum (int x, int);
int main()
{
    printf("%d\n", sum(5, 10));
    printf("%d\n", sum(15, 10));

    return 0;
}
int sum (int x, int y)
{
    int sum = x + y;
    return sum;
}