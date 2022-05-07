// Write a program to find highest frequency element in array.
#include <stdio.h>
#include <stdlib.h>

// Solve Function
void solve(int *arr, int size)
{
    int i, j;
    // get data from user
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // logic
    int count,maxFreq=0,maxOccurEle=0;
    for(i=0;i<size;i++){
        count= 0;
        for(j=0;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
            }
            if(count>maxFreq){
                maxFreq = count;
                maxOccurEle = arr[i];
            }
        }
    }
    printf("\nMaximum Occurrence Element is %d at %d times",maxOccurEle,maxFreq);
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