#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int ans = strcmp(a, b);
    // printf("%d", ans);
    if(ans < 0) printf("A is smaller\n");
    else if(ans > 0) printf("B is Smaller\n");
    else printf("Both are same\n");
    return 0;
}