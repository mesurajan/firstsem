#include <stdio.h>
#include <conio.h>
#define n 5
int main()
{
    int arr[n], i;
    printf("Enter the string to reverse: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("The  reversed string is :\n");
    for (i = n - 1; i >= 0; i--)
    {

        printf("%d \t", arr[i]);
    }
    return 0;
}
