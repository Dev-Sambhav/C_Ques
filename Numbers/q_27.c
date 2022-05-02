// Write a program to calculate the square root of a given number.

#include <stdio.h>
#include <math.h>

// Solve
void solve(float num)
{
    float ans = sqrt(num);
    printf("%.2f",ans);
}

int main()
{
    float num;
    printf("\nEnter a Number:- ");
    scanf("%f", &num);
    solve(num);
    return 0;
}