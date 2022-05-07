// Write a program to calculate length of an array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {34,78,2,56,12};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("\nLength of an array is %d",len);
    return 0;
}