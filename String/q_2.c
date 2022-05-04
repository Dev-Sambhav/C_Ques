// Write a program to count occurrence of a given character in a String.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Solve Function
void solve(char *name)
{
    char searchChar;
    int len,i,count=0;
    fflush(stdin);
    printf("\nEnter Search Character:- ");
    scanf("%c",&searchChar);
    len = strlen(name);
    for(i=0;i<len;i++){
        if(tolower(name[i])==tolower(searchChar)){
            count++;
        }
    }
    printf("Total occurrence of %c in %s is %d",searchChar,name,count);
}
int main()
{
    char name[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]",name);
    solve(name);
    return 0;
}