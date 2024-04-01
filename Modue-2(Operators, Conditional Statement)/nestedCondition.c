#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 5000)
    {
        printf("Cox's Bazar jabo\n");
        if(tk >= 10000)
        {
            printf("Sain Martine Jabo\n");
        }
        else
        {
            printf("Ferot Ashbo\n");
        }
    }
    else
    {
        printf("Kothao jabo nh\n");
    }

    return 0;
}