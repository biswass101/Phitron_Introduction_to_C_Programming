#include<stdio.h>
int main()
{
    char name[6] = "Niloy";
    //printing in one way
    // for(int i = 0; i < 5; i++) printf("%c", name[i]);
    //printing in two way
    printf("%s\n", name);
    printf("String size: %d", sizeof(name)/sizeof(char));
    return 0;
}