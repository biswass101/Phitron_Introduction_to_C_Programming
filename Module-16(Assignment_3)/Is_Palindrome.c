#include<stdio.h>
#include<string.h>
int is_palindrome(char *str)
{
    int i = 0, j = strlen(str) - 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}
int main()
{
    char str[10001];
    scanf("%s", str);
    if(is_palindrome(str) == 1) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}