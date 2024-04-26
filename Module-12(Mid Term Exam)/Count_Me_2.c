#include <stdio.h>
#include <string.h>

int main()

{

    char str[1000001];
    int cnt_cons = 0;
    scanf("%s", str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
        }
        else
        {

            cnt_cons++;
        }
        i++;
    }

    printf("%d\n", cnt_cons);

    return 0;
}