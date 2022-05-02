#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *f;
    int ch;
    f = fopen("d:/C/Files/Sambhav.txt", "r");
    while ((ch = fgetc(f)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(f);
    return 0;
}