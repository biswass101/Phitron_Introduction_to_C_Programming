#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    char str[n + 1]; scanf("%s", str);
    long long sum = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        sum += (str[i] - '0');
        i++;
    }
    printf("%d\n", sum);
    return 0;
}