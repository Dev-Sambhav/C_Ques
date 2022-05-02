#include<stdio.h>
#include<conio.h>
int main(){
    FILE *f;
    int ch;
    f = fopen("d:/C/Files/Sambhav.txt","w");
    while((ch=getche())!='$'){
        fputc(ch,f);
    }
    fclose(f);
return 0;
}