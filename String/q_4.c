// Write a program to check a string is palindrome or not
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char *name)
{
    char name2[30];
    strcpy(name2, name);
    strrev(name2);
    if(!strcmp(name, name2)){
        printf("\n%s is Palindrome",name);
    }else{
        printf("\n%s is not a Palindrome",name);
    }
}
int main()
{
    char name[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]",name);
    solve(name);
    return 0;
}