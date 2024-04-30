#include<stdio.h>
void fun(int *ptr)
{
    printf("%d\n", *ptr);
    printf("%p\n", ptr);
    *ptr = 1000;
}
int main()
{
    int x = 100;
    printf("%p\n", &x);
    fun(&x);
    printf("%d\n", x);
    return 0;
}