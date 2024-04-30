#include<stdio.h>
int main()
{
    int n, k; scanf("%d", &n); 
    k = 1;
    int s = n - 1;
    for(int i = 1; i <= 2*n -1; i++)
    {
        for(int j = 1; j <= s; j++) printf(" ");
        for(int j = 1; j <= k; j++) printf("*");
        printf("\n");
        if(i < n) k += 2, s--;
        else k -= 2, s++;
    }
    return 0;
}