#include<stdio.h>
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        int num; scanf("%d", &num);
        while(1)
        {
            printf("%d ", num % 10);
            num /= 10;
            if(num == 0) break;
        }
        printf("\n");
    }
    return 0;
}