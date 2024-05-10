#include<stdio.h>
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long int semiMul = a * b * c;
        if(m < semiMul)
        {
            if(m == 0) printf("%c\n", '0');
            else printf("%d\n", -1);
        }
        else
        {
            if(m % semiMul == 0) 
            {
                printf("%lld\n", m /semiMul);
            }
            else  printf("%d\n", -1);
        }
    }
    return 0;
}