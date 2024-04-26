#include<stdio.h>
int main()
{
    char str1[1000001];
    fgets(str1, 1000001, stdin);
    for(int i = 0; str1[i] != '\\'; i++)
    {
        printf("%c", str1[i]);
    }
    return 0;
}