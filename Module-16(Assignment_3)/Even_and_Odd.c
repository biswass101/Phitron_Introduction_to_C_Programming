#include<stdio.h>
void odd_even()
{
    int n;  scanf("%d", &n);
    int arr[n];
    for(int i  = 0; i < n; i++) scanf("%d", &arr[i]);
    int cnt_e = 0, cnt_o = 0;
    for(int i = 0; i< n; i++)
    {
        if(arr[i] % 2== 0) cnt_e++;
        else cnt_o++;
    }

    printf("%d %d\n", cnt_e, cnt_o);
}
int main()
{
    odd_even();

    return 0;
}