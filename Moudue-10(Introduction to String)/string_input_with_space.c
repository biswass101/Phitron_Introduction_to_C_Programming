#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    // gets(name); //way one - not standard and enter input nay na!
    fgets(name, 18, stdin); //standard but takes enter input
    name[10] = '\0';
    printf("%s", name);
    return 0;
}