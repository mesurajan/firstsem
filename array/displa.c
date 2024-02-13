#include <stdio.h>
#include <conio.h>
#define n 15
int main()
{
    int arr[n] = {[0] = 1, [1] = 2, [5] = 6}, i;
    for (i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
}