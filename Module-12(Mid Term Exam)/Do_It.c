#include<stdio.h>

int main()

{

    int n, k;
    scanf("%d %d", &n, &k);
    int i = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= k)
        {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}