#include<stdio.h>
#include<string.h>
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        char str[100001]; scanf("%s", str);
        int c1 = 0, c2 = 0, c3 = 0;
        for(int i = 0; i < strlen(str); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                c1++;
            }
            else if(str[i] >= 'a' && str[i] <= 'z') c2++;
            else c3++;
        }
        printf("%d %d %d\n", c1, c2, c3);
    }
    return 0;
}