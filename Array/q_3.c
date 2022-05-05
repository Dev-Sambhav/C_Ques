// Write a program to find first duplicate number in a given array.
#include <stdio.h>
#include <stdlib.h>

// Solve Function
void solve(int *arr, int size)
{
    int i,j;
    // get data from user
    for (i = 1; i <= size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=1;i<=size;i++){
        for(j=i+1;j<=size;j++){
            if(arr[i]==arr[j]){
                printf("\nFirst Duplicate number is %d",arr[i]);
                return;
            }
        }
    }
}
int main()
{
    int size, *arr;
    printf("\nHow many elements do you wants to add? :- ");
    scanf("%d", &size);
    arr = (int *)malloc(size*sizeof(int));
    solve(arr, size);
    return 0;
}