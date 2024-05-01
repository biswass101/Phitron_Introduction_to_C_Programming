#include<stdio.h>
int getMin(int *arr, int n)
{
    int mn = arr[0];
    for(int i = 0 ;i < n; i++)
    {
        if(arr[i] < mn) mn = arr[i]; 
    }

    return mn;
}

int getMax(int *arr, int n)
{
    int mx = arr[0];
    for(int i = 0 ;i < n; i++)
    {
        if(arr[i] > mx) mx = arr[i]; 
    }

    return mx;
}
int main()
{
    int n; scanf("%d", &n);
    int arr[n]; for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%d %d\n", getMin(arr, n), getMax(arr, n));
    return 0;
}