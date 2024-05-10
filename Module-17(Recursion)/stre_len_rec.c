#include<stdio.h>
int getLenStr(char *str, int i)
{
    if(str[i] == '\0') return 0;
    return 1 + getLenStr(str, i + 1);
}
int main()
{
    // char str[100]; scanf("%s", str);
    int len = getLenStr("", 0);
    printf("%d\n", len);
    return 0;
}