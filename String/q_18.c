// Write a program to concatenate two strings.
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char *string1, char *string2)
{
    int i,j;
    strcat(string1, string2);
    printf("\nNew String is %s",string1);
}
int main()
{
    char string1[70];
    char string2[30];
    printf("\nEnter First String:- ");
    scanf("%[^\n]",string1);
    fflush(stdin);
    printf("\nEnter Second String:- ");
    scanf("%[^\n]",string2);
    solve(string1, string2);
    return 0;
}