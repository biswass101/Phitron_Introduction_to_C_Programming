#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n; scanf("%d", &n);
        char str[n + 1]; scanf("%s", str);
        int cnt_t = 0, cnt_p = 0;
        for(int i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == 'T') cnt_t++;
            else cnt_p++;
        }

        if(cnt_t > cnt_p) printf("Tiger\n");
        else if(cnt_t < cnt_p) printf("Pathaan\n");
        else printf("Draw\n");
    }
    return 0;
}