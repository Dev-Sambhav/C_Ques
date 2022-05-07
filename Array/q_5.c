// Write a program for, given two arrays 1,2,3,4,5 and 2,3,1,0,5 find which number is not present in the second array.
#include <stdio.h>
#include <stdlib.h>

// Solve Function
void solve(int *arr1, int *arr2, int size)
{
    int i,j,isMatch=0;
    for(i=0;i<size;i++){
        isMatch = 0;
        for(j=0;j<size;j++){
            if(arr1[i] == arr2[j]){
                isMatch = 1;
                break;
            }else{
                isMatch = 0;
            }
        }
        if(!isMatch){
            printf("%d is not present in second array",arr1[i]);
        }
    }
}
int main()
{
    int size = 5;
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {2, 3, 1, 0, 5};
    solve(arr1, arr2, size);
    return 0;
}