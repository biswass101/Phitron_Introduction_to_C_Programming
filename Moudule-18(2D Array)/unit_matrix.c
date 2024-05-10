#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;
    if(row != col) flag = 0;
    else{
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(i == j) //checking diag. value
                {
                    if(arr[i][j] != 1)
                    {
                        flag =  0;
                        break;
                    }
                }
                else if(arr[i][j] != 0) //checking
                //other element is zero or not
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if(flag) printf("Unit Matrix\n");
    else printf("Not Unit Matrix\n");
    return 0;
}