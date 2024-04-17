#include<stdio.h>

int main()

{

    int arr[5];
    for(int i = 0; i < 5; i++)//inputting loop
    {
        scanf("%d", &arr[i]);
    }

     for(int i = 0; i < 5; i++)//Outputting loop
    {
        printf("%d ", arr[i]);
    }
    return 0;
}