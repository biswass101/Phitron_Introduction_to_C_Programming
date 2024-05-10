#include<stdio.h>
long long int funSum(int *arr, int n, int i)
{
    if(i == n) return 0;
    long long int mySum = arr[i];
    return mySum + funSum(arr, n, i + 1);
}
int main()
{
    int n; scanf("%d", &n);
    int arr[n]; for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
    printf("%lld\n", funSum(arr, n, 0));
    return 0;
}