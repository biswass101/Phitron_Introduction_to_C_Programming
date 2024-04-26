#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int arr[n]; for(int i = 0;i< n; i++) scanf("%d", &arr[i]);
    int mx = arr[0], a;
    int mn = arr[0], b;
    for(int i = 0; i < n; i++)
    {
        if(mx <= arr[i])
        {
            mx = arr[i];
            a = i;
        }
        if(mn >= arr[i])
        {
            mn = arr[i];
            b = i;
        }
    }

    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;

    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}