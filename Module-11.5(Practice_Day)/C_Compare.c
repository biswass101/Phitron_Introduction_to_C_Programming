#include<stdio.h>
#include<string.h>
int main()
{
    char a[21], b[21]; scanf("%s %s", a, b);
    if(strcmp(a, b) < 0)
    {
        printf("%s\n", a);
    }
    else if(strcmp(a, b) > 0)
    {
        printf("%s\n", b);
    }
    else printf("%s\n", a);
    return 0;
}