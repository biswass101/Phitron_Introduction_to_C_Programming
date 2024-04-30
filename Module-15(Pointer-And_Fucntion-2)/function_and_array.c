#include<stdio.h>
//way-1
// void getArray(int arr[], int n)
// {
//     printf("%d\n", sizeof(arr)/sizeof(int));
//     for(int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
void getArray(int *arr, int n)
{
    printf("%d\n", sizeof(arr)/sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[5] = {1, 2, 4 , 5 , 3};
    printf("%d\n", sizeof(arr)/sizeof(int));
    getArray(arr, 5);
    return 0;
}