#include<stdio.h>
int getMinEle(int *arr, int n)
{
    int mn = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < mn) mn = arr[i];
    }

    return mn;
}
int main()
{
    int n; scanf("%d", &n);
    int arr[n]; for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int min = getMinEle(arr, n);
    int cntMinEle = 0;
    for(int i = 0; i < n; i++) if(arr[i] == min) cntMinEle++;
    if(cntMinEle % 2 ==  0) printf("Unlucky");
    else printf("Lucky");
    return 0;
}