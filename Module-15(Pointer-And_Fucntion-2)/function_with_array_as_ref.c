#include<stdio.h>
void fun(int *arr, int n)
{
    // for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    // printf("\n");

    //changing array value from function-->
    arr[0] = 500;
}
int main()
{
    int arr[5] = {1, 2, 4, 5, 6};
    fun(arr, 5);
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}