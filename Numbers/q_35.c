// Write a program to convert fahrenheit to celsius.

#include <stdio.h>

// Solve
void solve(float f)
{
    float c;
    c = (f-32)*5/9;
    printf("Celsius of %.2f is %.2f",f,c);
}

int main()
{
    float f;
    printf("\nEnter Fahrenheit Value:- ");
    scanf("%f", &f);
    solve(f);
    return 0;
}