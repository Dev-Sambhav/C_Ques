// Write a program to sort characters of string.
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char *string)
{
    int i,j;
    char tempChar;
    int len = strlen(string);
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(string[i] > string[j]){
                tempChar = string[i];
                string[i] = string[j];
                string[j] = tempChar;
            }
        }
    }
    printf("\nSorted String is %s",string);
}
int main()
{
    char string[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]", string);
    solve(string);
    return 0;
}