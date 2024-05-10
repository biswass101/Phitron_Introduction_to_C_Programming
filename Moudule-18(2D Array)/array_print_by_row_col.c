#include<stdio.h>
int main()
{
    int row, col; scanf("%d %d", &row, &col);
    int arr[5][3];
    for(int row = 0; row < 5; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }

    // printf("Inputted array is: \n");
    // for(int i = 0; i < 5; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }

    //     printf("\n");
    // }
    //printing specific row
    int e = 2;
    for(int i = 0; i < col; i++) printf("%d ", arr[e][i]);
    printf("\n");
    //printing specific col
    int f = 2;
    for(int i = 0; i < row; i++) printf("%d ", arr[i][e]);
    return 0;
}