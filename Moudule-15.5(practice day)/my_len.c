#include<stdio.h>
int my_len(char *str)
{
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++) len++;

    return len;
}
int main()
{
    char str[100001]; scanf("%s", str);
    printf("%d\n", my_len(str));
    return 0;
}