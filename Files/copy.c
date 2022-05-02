#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *p, *q;
    int ch;
    p = fopen("d:/C/Files/Sambhav.txt", "r");
    q = fopen("d:/C/Files/Sam.txt", "w");
    while((ch = fgetc(p))!=EOF){
        fputc(ch,q);
    }
    printf("Copied Successfully");
    fclose(p);
    fclose(q);
    return 0;
}