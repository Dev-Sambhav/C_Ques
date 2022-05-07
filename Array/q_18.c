// Write a program to find sum of array elements.
#include <stdio.h>
#include <stdlib.h>

// Solve Function
void solve(int *arr, int size)
{
    int i,sum=0;
    // get data from user
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // logic
    for(i=0;i<size;i++){
        sum += arr[i];
    }
    printf("\nSum of all the elements of array is %d",sum);

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