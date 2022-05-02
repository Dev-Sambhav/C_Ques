// Write a program to swap two numbers using third variable.

#include <stdio.h>

// Solve
void solve(int n1,int n2)
{
    int temp;
    printf("\nBefore Swapping\nA->%d\nB->%d",n1,n2);
    // logic
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("\nAfter Swapping\nA->%d\nB->%d",n1,n2);

}

int main()
{
    int n1,n2;
    printf("\nEnter two number:- ");
    scanf("%d%d", &n1,&n2);
    solve(n1,n2);
    return 0;
}