#include <stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        double ans = c * (a*1.00/(a + b));

        int ans2 = floor(ans);

        printf("%d\n", c - ans2);
    }
    return 0;
}