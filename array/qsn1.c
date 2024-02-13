// WAP to search the number inputted by user in an array.

#include <stdio.h>

int main()
{
    int arr[10], i, num, flag = 0;

    // Input array elements
    printf("Enter 10 elements in the array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input number to be searched
    printf("Enter a number to be searched: ");
    scanf("%d", &num);

    // Linear search
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
            break;
        }
    }

    // Display result
    if (flag == 1)
    {
        printf("%d is present at position %d\n", num, i + 1);
    }
    else
    {
        printf("%d is not present in the array\n", num);
    }

    return 0;
}