// Write a program to replace the string space with a given character.
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char *name)
{
    char givenChar;
    int len,i,j;
    fflush(stdin);
    printf("\nEnter Search Character:- ");
    scanf("%c",&givenChar);
    len = strlen(name);
    for(i=0;i<len;i++){
        if(name[i] == ' ')
        {
            name[i] = givenChar;
        }
    }
    printf("Answer:- %s",name);
}
int main()
{
    char name[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]",name);
    solve(name);
    return 0;
}