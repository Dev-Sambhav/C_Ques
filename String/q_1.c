// Write a program in C which will remove any given character from a String.
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char *name)
{
    char searchChar;
    int len,i,j;
    fflush(stdin);
    printf("\nEnter Search Character:- ");
    scanf("%c",&searchChar);
    len = strlen(name);
    for(i=0;i<len;i++){
        if(name[i]==searchChar){
            for(j=i;j<len;j++){
                name[j] = name[j+1];
            }
            len--;
            i--;
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