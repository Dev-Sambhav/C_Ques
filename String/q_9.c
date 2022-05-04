// Write a program to convert lowercase vowel to uppercase in string.
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        ch -= 32;
        printf("\nYour Vowel in Uppercase is %c", ch);
    }
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("\nAlready in UpperCase!!!");
    }
    else
    {
        printf("\nGiven character is not vowel!!!");
    }
}
int main()
{
    char ch;
    printf("\nEnter a Vowel Character:- ");
    scanf("%c", &ch);
    solve(ch);
    return 0;
}