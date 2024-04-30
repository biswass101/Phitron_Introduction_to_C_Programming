#include<stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%p\n", &arr[0]); //&arr[0] == arr
    printf("%p\n", arr);
    printf("%d\n", *arr);

    printf("1st idx value: %d\n", arr[1]); //normal way
    printf("1st idx value: %d\n", 1[arr]);

    
    printf("1st idx value: %d\n", *(arr + 1)); //ptr way
    printf("2nd idx %d\n", *(2 + arr));
    return 0;
}