// Write a program to delete element from array at given index.
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// Solve Function
void solve(int *arr, int size)
{
    int i, j, loc;
    // get data from user
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAt which location do you wants to delete data :- ");
    scanf("%d", &loc);
    if (loc >= size)
    {
        printf("\nInvalid location!!!");
        exit(1);
    }
    // logic
    for (j = loc; j < size; j++)
    {
        arr[j] = arr[j + 1];
    }
    size--;
    printf("\nNew Array:- ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int size, arr[MAX];
    printf("\nHow many elements do you wants to add? :- ");
    scanf("%d", &size);
    solve(arr, size);
    return 0;
}