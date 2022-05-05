// Write a program for, In a array 1-100 multiple numbers are duplicates, how do you find it.
#include <stdio.h>

// Solve Function
void solve(int *arr, int size)
{
    int i;
    int freq[101] = {0};
    // get data from user
    for (i = 1; i <= size; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    printf("\nDuplicate numbers are ");
    for(i=1;i<=100;i++){
        if(freq[i]>1){
            printf("%d ",i);  // user value is equal to frequency index value.
        }
    }
}
int main()
{
    int size;
    printf("\nHow many elements do you wants to add? :- ");
    scanf("%d", &size);
    int arr[size];
    solve(arr, size);
    return 0;
}