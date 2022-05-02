// Write a program to convert celsius to fahrenheit.

#include <stdio.h>

// Solve
void solve(float c)
{
    float f;
    f = c*9/5+32;
    printf("Fahrenheit of %.2f is %.2f",c,f);
}

int main()
{
    float c;
    printf("\nEnter Celsius Value:- ");
    scanf("%f", &c);
    solve(c);
    return 0;
}