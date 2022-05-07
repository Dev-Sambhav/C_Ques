// Write a program to delete given element from array
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// Solve Function
void solve(int *arr, int size)
{
    int i, j, ele, foundLoc;
    // get data from user
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nWhich Element do you wants to delete :- ");
    scanf("%d", &ele);
    // logic
    int found = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            found = 1;
            foundLoc = i;
            break;
        }
    }
    if (!found)
    {
        printf("\nElement which you wants to delete is not present in list!!!");
        return;
    }
    else
    {
        for (j = foundLoc; j < size; j++)
        {
            arr[j] = arr[j + 1];
        }
        size--;
        printf("\nNew Array:- ");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
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