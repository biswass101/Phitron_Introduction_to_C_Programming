#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int arr1[n]; for(int i = 0; i < n; i++) scanf("%d", &arr1[i]);
    int m; scanf("%d", &m); 
    int arr2[m]; for(int i = 0; i < m; i++) scanf("%d", &arr2[i]);
    int new_arr[n + m];
    int i = 0;
    for(; i < n ; i++)
    {
        new_arr[i] = arr1[i];
    }
    for(int j = 0; j < m; j++)
    {
        new_arr[i] = arr2[j];
        i++;
    }

    for(int i = 0; i < n + m; i++) printf("%d ", new_arr[i]);
    printf("\n");
    return 0;
}