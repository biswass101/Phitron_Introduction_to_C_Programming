#include<stdio.h>
void fun(char *str)
{
    str[0] = 'G';
}
int main()
{
    char str[] = "hello";
    fun(str);
    printf("%s\n", str);
    
    return 0;
}