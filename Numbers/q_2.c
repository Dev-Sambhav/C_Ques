// Write a program to check whether an integer is Armstrong number or not.

#include <stdio.h>
#include <math.h>

// Solve
void solve(int num)
{
    int n1, n2;
    double sum=0,remain,c=0;
    n1 = n2 = num;
    while (n1 > 0)
    {
        c++;
        n1 = n1 / 10;
    }
    while (n2 > 0)
    {
        remain = n2 % 10;
        sum += pow(remain, c);
        n2 = n2 / 10;
    }
    if (sum == num)
    {
        printf("\nArmstrong Number");
    }
    else
    {
        printf("\nNot a Armstrong Number");
    }
}

int main()
{
    int num;
    printf("\nEnter a Number:- ");
    scanf("%d", &num);
    solve(num);
    return 0;
}