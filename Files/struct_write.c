#include <stdio.h>
typedef struct student
{
    int roll;
    char name[20];
} student;
int main()
{
    FILE *f;
    student s;
    char ch;
    f = fopen("sam12.txt", "w");
    do
    {
        printf("\nEnter roll & name:- ");
        scanf("%d %[^\n]", &s.roll, s.name);
        fwrite(&s, sizeof(s), 1, f);
        fflush(stdin);
        printf("\nMore (Y/N):- ");
        scanf("%c",&ch);
    } while (ch == 'y');
    fclose(f);

    return 0;
}