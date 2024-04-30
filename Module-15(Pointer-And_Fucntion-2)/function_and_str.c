#include<stdio.h>
#include<string.h>

void fun(char /*arr[]*/ *arr)
{
    int sz = sizeof(arr)/sizeof(char); //not works
    int len = strlen(arr); //perfectly works
    printf("length: %d\n", len);
    printf("%d\n", sz);

    //little experiment--->
    // int n[2] = {1, 2};
    // printf("%d\n", n);
    // printf("%d\n", &n[0]);
    // return &n[0];
}
int main()
{
    char arr[20] = "Hello2";
    printf("%d\n", sizeof(arr)/sizeof(char)); //declared size
    fun(arr);
    // printf("%d\n", fun(arr)); 
    return 0;
}