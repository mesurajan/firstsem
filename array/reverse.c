#include <stdio.h>
#include <conio.h>
#define n 5

int main()
{
    int arr[n] = {12, 13, 17, 11, 34};
    int i;
    for (i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = n - 1; i >= 0; i--)
    {

        printf("%d ", arr[i]);
    }
}
