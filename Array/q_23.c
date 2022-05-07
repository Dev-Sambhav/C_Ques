// Write a program to merge two arrays
#include <stdio.h>
#include <stdlib.h>

// Solve Function
void solve(int *arr1, int *arr2, int size1, int size2)
{
    int i, j, temp;
    // get data from user
    printf("Enter Element for First Array:- ");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter Element for Second Array:- ");
    // get data from user
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    // logic
    int totalArrSize = size1 + size2;
    int arr[totalArrSize];
    for (i = 0; i < size1; i++)
    {
        arr[i] = arr1[i];
    }
    for (i = 0, j = size1; i < size2 && j < totalArrSize; i++, j++)
    {
        arr[j] = arr2[i];
    }
    printf("\nNew Array:- ");
    for (i = 0; i < totalArrSize; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int size1, size2, *arr1, *arr2;
    printf("\nHow many elements do you wants to add for 1st array? :- ");
    scanf("%d", &size1);
    arr1 = (int *)malloc(size1 * sizeof(int));
    printf("\nHow many elements do you wants to add for 2nd array? :- ");
    scanf("%d", &size2);
    arr2 = (int *)malloc(size2 * sizeof(int));
    solve(arr1, arr2, size1, size2);
    return 0;
}