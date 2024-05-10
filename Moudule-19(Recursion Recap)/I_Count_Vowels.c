#include<stdio.h>
int getVowes(char *str, int i)
{
    if(str[i] == '\0') return 0;
    int myVowel = 0;
    if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + 32;
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') myVowel = 1;
    return myVowel + getVowes(str, i + 1);
}
int main()
{
    char str[201];
    gets(str);
    printf("%d", getVowes(str, 0));
    return 0;
}