#include<stdio.h>
void fun(int x)
{
    // printf("fun x er address: %p\n", &x);
    x = 200;
    printf("main a x er value: %d\n", x);
}
int main()
{
    int x = 10;
    printf("main x er address: %p\n", &x);
    fun(x); //call by value
    printf("main a x er value: %d\n", x); //no change in main function
    return 0;
}