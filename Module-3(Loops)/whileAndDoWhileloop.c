#include<stdio.h>
int main()
{
    //While loop
    int n; scanf("%d", &n);
    int i = 0;
    while(i < n)
    {
        if(i == 2) continue;
        printf("%d\n", i);
        i++;
    }
    return 0;
}