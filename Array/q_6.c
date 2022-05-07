// Write a program for how to compare two array is equal in size or not.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[] = {2, 3, 7, 8, 34, 67, 89};
    int arr2[] = {1, 5, 7, 8, 56, 78};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    if (size1 == size2)
    {
        printf("\nBoth array of same Size");
    }
    else
    {
        printf("\nBoth array of different size");
    }
    return 0;
}