// Write a program to convert lowercase string into uppercase of string
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char *string)
{
    int len, i;
    len = strlen(string);
    for (i = 0; i < len; i++)
    {
        if (string[i] >= 97 && string[i] <= 122)
        {
            string[i] -= 32;
        }
    }
    printf("\nYour String in Uppercase is %s",string);
}
int main()
{
    char string[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]",string);
    solve(string);
    return 0;
}