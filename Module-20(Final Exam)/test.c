#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// #include<conio.h>
int main() 
{
    
    int n; scanf("%d", &n);
    int k = n; int inner = 2*n -1;
    for(int i = 1; i <= 2*n - 1; i++)
    {
        int o = n; 
        for(int j = 1; j <= ((2*n - 1) - inner)/2; j++)
        {
            printf("%d ", o);
            o--;
        }
        for(int j = 1; j <= inner; j++)
        {
            printf("%d ", k);
        }
        for(int j = 1; j <= ((2*n - 1) - inner)/2; j++)
        {
            o++;
            printf("%d ", o);
        }
        printf("\n");
        if(i <= n - 1)
        {
            k -= 1;
            inner -= 2;
        }
        else
        {
            k++;
            inner += 2;
        }
    }
    return 0;
}