// Write a program to perform left rotation of array elements by two positions.
#include <stdio.h>
#include <stdlib.h>

// Solve Function
void solve(int *arr, int size)
{
    int i, j, temp;
    // get data from user
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // logic
    for (i = 0; i < 2; i++)
    {
        temp = arr[0];
        for (j = 0; j < size - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
    printf("\nNew Array:- ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int size, *arr;
    printf("\nHow many elements do you wants to add? :- ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    solve(arr, size);
    return 0;
}