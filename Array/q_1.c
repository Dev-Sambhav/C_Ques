// Write a program for, In array 1-100 numbers are stored, one number is missing how do you find it.
#include <stdio.h>
int main()
{
    int arr[100];
    int i;
    for (i = 0; i < 99; i++)
    {
        if(i >= 5){
            arr[i] = i+2;
        }
        else{
            arr[i] = i+1;
        }
        
    }
    printf("\nValues:- ");
    for(i=0;i<99;i++){
        printf("%d ",arr[i]);
    }
    for (i = 0; i < 99; i++)
    {
        if(arr[i] != i+1){
            printf("\n\nMissing Value is %d",i+1);
            break;
        }
    }

    
    return 0;
}