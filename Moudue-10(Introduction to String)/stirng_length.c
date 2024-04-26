#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    // int cnt = 0;
    // for(int i = 0; a[i] != '\0'; i++) cnt++;
    // printf("%d\n", cnt);

    //buiit in funciton of string len
    printf("%d", strlen(a));
    return 0;
}