#include<stdio.h>
int main()
{
    int x; scanf("%d", &x);
    if(x == 0) printf("zero\n");
    else if(x < 0) printf("negative\n");
    else printf("positive\n");
    return 0;
}