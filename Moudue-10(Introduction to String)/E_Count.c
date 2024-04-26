#include<stdio.h>
int main()
{
    char str[1000001];
    scanf("%s", str);
    int i = 0;
    long long int sum = 0;
    while(str[i] != '\0')
    {
        sum += (str[i] - '0');
        i++;
    }
    printf("%lld\n", sum);
    return 0;
}