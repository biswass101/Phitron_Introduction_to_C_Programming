#include<stdio.h>
int main()
{
    char ch; scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z') printf("%c\n", ch + 32);
    else printf("%c\n", ch - 32);
    return 0;
}