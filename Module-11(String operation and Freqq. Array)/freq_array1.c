#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int arr[n]; for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int cnt[8] = {0};
    for(int i = 0; i < n; i++)
    {
        cnt[arr[i]]++;
    }
    for(int i = 0; i < 8; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }
    return 0;
}