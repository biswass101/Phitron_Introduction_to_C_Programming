#include<stdio.h>
int main()
{
    char str[100001];
    scanf("%s", &str);
    // printf("%s\n", str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ',') str[i] = ' ';
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else str[i] -= 32;
    }

    printf("%s", str);
    return 0;
}