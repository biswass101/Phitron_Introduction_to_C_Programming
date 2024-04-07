#include<stdio.h>
int main()
{
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    //vajjo = (vajok * vagfol) + vagesh
    //vajjo - vagsesh = vajok * vagfol
    //vajok = (vajjo - vagsesh) / vagfol
    int ans = (a - c) / b;
    printf("%d\n", ans);
    return 0;
}