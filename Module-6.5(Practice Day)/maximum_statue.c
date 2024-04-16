#include<stdio.h>

int main()

{

    long long int eyes, mouth, body;
    long long int e, m, b;
    scanf("%lld%lld%lld", &eyes, &mouth, &body);
    {
        if(eyes < mouth && eyes < body)
        {
            
            
                printf("%lld\n", eyes);
            
        }
        else if(mouth < eyes && mouth < body)
        {
            e = eyes - mouth;
            m = mouth - mouth;
            b = body - mouth;
            if(e == 0)
            {
                printf("%lld\n", mouth);
            }
            else if(e/2 <= b)
            {
                printf("%lld\n", (e/2)+mouth);
            }
            else
            {
                printf("%lld\n", mouth + b);
            }
        }
        else
        {
        
                printf("%lld\n", body);
            
        }
    }

    return 0;
}