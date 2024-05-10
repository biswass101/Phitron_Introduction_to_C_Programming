#include<stdio.h>
/*

condition for be a scaller matrix-->
1. Squre Matrix
2. Diagonal Matrix
3. Primary Diagonal Value(all value in diagonal) should be same

*/
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
                if(i + j == row - 1) //checking diag. value(secondary)
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

    if(flag) printf("Sec. Dig. Unit Matrix\n");
    else printf("Not Sec. Dig. Unit Matrix\n");
    return 0;
}