// Write a program to calculate the power using the POW method.

#include <stdio.h>
#include <math.h>

// Solve
void solve(int num)
{
    double ans = pow(num,2);
    printf("%lf",ans);
}

int main()
{
    int num;
    printf("\nEnter a Number:- ");
    scanf("%d", &num);
    solve(num);
    return 0;
}