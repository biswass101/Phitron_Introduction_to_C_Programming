#include<stdio.h>
int cnt_odd(int *arr, int n)
{
    int cnt_o = 0;
    for(int i = 0; i < n ;i++)
    {
        if(arr[i] % 2 != 0) cnt_o++;
    }

    return cnt_o;
}
int main()
{
    int n; scanf("%d", &n);
    int arr[n]; for(int i = 0; i< n; i++) scanf("%d", &arr[i]);
    printf("%d\n", cnt_odd(arr, n));
    return 0;
}