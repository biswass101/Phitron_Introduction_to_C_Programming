#include<stdio.h>
int main()
{
    int rahim = 100, karim = 500;
    printf("%d %d\n", rahim, karim); //here % is working as a formate specifier
    

    float chol = 2.5;
    printf("%0.3f\n", chol);


    char ami = 'a';
    char ami2 = 'Last';
    printf("%c\n", ami);
    printf("%c\n", ami2); //multiple char used, will get last char
    return 0;
}

//if we print no initialized or empty data varibale then we will
//get garbadge value