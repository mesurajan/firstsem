// 1 dimensional arrey
#include <stdio.h>
#include <conio.h>
#define n 15
int main()
{
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the input  %d element: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Array elements are as follow\n");
    for (i = 0; i < n; i++)
        printf("%d \t", arr[i]);
    return 0;
}