// Write a program to remove duplicate elements from array.
#include <stdio.h>
#include <stdlib.h>

// Solve Function
void solve(int *arr, int size)
{
    int i,j,k;
    // get data from user
    for (i = 1; i <= size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=1;i<=size;i++){
        for(j=i+1;j<=size;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<=size;k++){
                    arr[k] = arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    for(i=1;i<=size;i++){
        printf("%d ",arr[i]);
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