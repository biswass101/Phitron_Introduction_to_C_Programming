#include<stdio.h>
void sumit(int n, int m, int matA[n][m], int matB[n][m], int i, int j)
{
    int mysum = matA[i][j] + matB[i][j];
    printf("%d ")
}
int main()
{
    int n, m; scanf("%d %d", &n, &m);
    int matA[n][m], matB[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j= 0; j < m; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j= 0; j < m; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j= 0; j < m; j++)
    //     {
    //         printf("%d ", matB[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}