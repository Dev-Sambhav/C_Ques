// Write a program to print all odd numbers in array.
#include <stdio.h>
#include <stdlib.h>

// Solve Function
void solve(int *arr, int size)
{
    int i;
    // get data from user
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // logic
    printf("\nOdd Numbers :- ");
    for(i=0;i<size;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
        }
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