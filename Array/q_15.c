// Write a program to delete element at end of Array.
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// Solve Function
void solve(int *arr, int size)
{
    int i, j;
    // get data from user
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    //logic
    printf("\nDeleted data from end of array is %d",arr[size-1]);
    size--;
    printf("\nNew Array:- ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
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