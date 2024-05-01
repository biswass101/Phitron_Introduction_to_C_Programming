#include<stdio.h>
void sortAndPrint(int *arr, int n)
{
    int newArr[n];
    //copy-->
    for(int i = 0; i < n; i++) newArr[i] = arr[i];
    //sort
    for(int i = 0 ;i < n -1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(newArr[i] > newArr[j])
            {
                int tmp = newArr[i];
                newArr[i] = newArr[j];
                newArr[j] = tmp;
            }
        }
    }

    //print
    for(int i = 0; i < n; i++) printf("%d\n", newArr[i]);
}

void readNPrint(int *arr, int n)
{
    for(int i = 0; i < n; i++) printf("%d\n", arr[i]);
}

int main()
{
    int arr[3]; for(int i = 0; i < 3; i++) scanf("%d", &arr[i]);
    sortAndPrint(arr, 3);
    printf("\n");
    readNPrint(arr, 3);
    return 0;
}