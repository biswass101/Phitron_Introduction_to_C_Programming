#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001]; scanf("%s", str);
    int flag = 1;
    int i = 0, j = strlen(str) - 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}