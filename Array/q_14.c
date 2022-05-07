// Write a program to insert element at a given location in array
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// Solve Function
void solve(int *arr, int size)
{
    int i, j, loc,newData;
    // get data from user
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAt which location do you wants to add another data :- ");
    scanf("%d",&loc);
    if(loc >= MAX){
        printf("\nInvalid location!!!");
        exit(1);
    }
    printf("\nEnter new data:- ");
    scanf("%d",&newData);
    // logic
    size++;
    for(i=size-1;i>=loc;i--){
        arr[i] = arr[i-1];
    }
    arr[loc-1] =newData;
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