// Write a program to calculate simple interest with explanations.

#include <stdio.h>

// Solve
void solve(float p,float r,float t)
{
    float si;
    // Calculate Simple Interest
    si = (p*r*t)/100;
    printf("Simple Interest:- %.2f",si);
}

int main()
{
    float p,r,t;
    printf("\nEnter Principal:- ");
    scanf("%f", &p);
    printf("\nEnter Rate:- ");
    scanf("%f", &r);
    printf("\nEnter Time:- ");
    scanf("%f", &t);
    solve(p,r,t);
    return 0;
}