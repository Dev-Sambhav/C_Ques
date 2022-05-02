// Write a program to find GCD of two numbers using recursion.

#include <stdio.h>

// Solve
int solve(int n1, int n2, int min)
{
    if (n1%min!=0 || n2%min!=0)
    {
        min--;
        solve(n1, n2, min);
    }
    else
    {
        return min;
    }
}

int main()
{
    int n1, n2;
    printf("\nEnter two Number:- ");
    scanf("%d%d", &n1, &n2);
    int min = n1;
    if (min > n2)
    {
        min = n2;
    }
    int hcf = solve(n1, n2, min);
    printf("HCF of %d and %d is %d", n1, n2, hcf);
    return 0;
}