#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n; scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int pds = 0, sds = 0;
     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                pds += arr[i][j];
            }
            if(i + j == n - 1)
            {
                sds += arr[i][j];
            }
        }
    }

    printf("%d\n", abs(sds - pds));
    return 0;
}