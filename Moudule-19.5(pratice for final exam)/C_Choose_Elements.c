#include<stdio.h>
void sort(int *arr, int n)
{
    for(int i=0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n;j++)
        {
            if(arr[i] < arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i= 0; i < n;i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    long long int sum = 0;
    for(int i = 0; i < k; i++)
    {
        if(arr[i] >= 0) sum += arr[i];
    }

    printf("%lld", sum);
    return 0;
}