#include<stdio.h>
#include<limits.h>
int getMax(int *arr, int n, int i)
{
    if (i == n)
        return INT_MIN;
    int mymax = INT_MIN;
    if (arr[i] > mymax)
        mymax = arr[i];
    int youMax = getMax(arr, n, i + 1);
    if (mymax > youMax)
        return mymax;
    return youMax;
}
int main()
{
    int n; scanf("%d", &n);
    int arr[n]; for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
    printf("%d", getMax(arr, n, 0));
    return 0;
}