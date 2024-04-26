#include <stdio.h>
#define na '\0'
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int i = 0;
    while (1)
    {
        if (a[i] == na && b[i] == na)
        {
            printf("Same\n");
            break;
        }
        else if (a[i] == na)
        {
            printf("A Choto\n");
            break;
        }
        else if (b[i] == na)
        {
            printf("B Choto\n");
            break;
        }

        if (a[i] == b[i])
            i++;
        else if (a[i] < b[i])
        {
            printf("A Choto\n");
            break;
        }
        else
        {
            printf("B Choto\n");
            break;
        }
    }
    return 0;
}