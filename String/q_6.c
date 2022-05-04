// Write a program to check given character is digit or not.
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char ch)
{
    if(ch >= 48 && ch <= 57){
        printf("\nDigit");
    }else{
        printf("\nNot a Digit");
    }
}
int main()
{
    char ch;
    printf("\nEnter a Character:- ");
    scanf("%c", &ch);
    solve(ch);
    return 0;
}