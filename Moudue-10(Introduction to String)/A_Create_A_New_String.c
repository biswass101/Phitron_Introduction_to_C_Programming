#include<stdio.h>
int main()
{
    char str1[1001], str2[1001];
    scanf("%s %s", str1, str2);
    int len1 = 0, len2 = 0;
    for(int i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }
    for(int i = 0; str2[i] != '\0'; i++)
    {
        len2++;
    }
    printf("%d %d\n%s %s",len1, len2, str1, str2);
    return 0;
}