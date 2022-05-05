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
    f = fopen("sam12.txt", "r");
    while (fread(&s, sizeof(s), 1, f)!=EOF)
    {
        printf("\nRoll=%d, Name=%s",s.roll,s.name);
    }
    fclose(f);
    return 0;
}