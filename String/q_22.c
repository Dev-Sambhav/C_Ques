// Write a program to copy one string to another string
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char *string)
{
    char string2[30];
    strcpy(string2, string);
    printf("\n%s",string2);
}
int main()
{
    char string[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]", string);
    solve(string);
    return 0;
}