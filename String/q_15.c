// Write a program to separate characters in a given string.
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char *string)
{
    int i;
    for(i=0;i<strlen(string);i++){
        printf("%c ",string[i]);
    }
}
int main()
{
    char string[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]",string);
    solve(string);
    return 0;
}