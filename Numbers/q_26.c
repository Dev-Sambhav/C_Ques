// Write a program to calculate the cube of a given number.

#include <stdio.h>

// Solve
void solve(float num)
{
    float ans = num*num*num;
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