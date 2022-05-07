// Write a program to insert an element at end of an array.
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
    printf("\nEnter another data :- ");
    scanf("%d",&arr[size]);
    size++;
    printf("\n%d",size);
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