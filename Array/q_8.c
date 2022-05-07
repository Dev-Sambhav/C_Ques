// Write a program to find second highest number in an integer array.
#include <stdio.h>
#include <stdlib.h>

// Solve Function
void solve(int *arr, int size)
{
    int i,j,maxNum=0,temp;
    // get data from user
    for (i = 1; i <= size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=1;i<=size;i++){
        for(j=i+1;j<=size;j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nSecond highest number in given array is %d",arr[2]);
    
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