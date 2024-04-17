#include<stdio.h>

int main()

{

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num;
    int count = 0;
    scanf("%d", &num);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            printf("%d\n", i);
            break;
        }
        else
        {
            count++;
        }
    }
    if(count == n)
    {
        printf("%d\n", -1);
    }

    return 0;
}