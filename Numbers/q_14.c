// Write a program to add two integer without using arithmetic + operator.

#include <stdio.h>

// Solve
void solve(int n1,int n2)
{
    int i;
    for(i=0;i<n2;i++){
        n1++;
    }
    printf("\nSum of two number is %d",n1);
}

int main()
{
    int n1,n2;
    printf("\nEnter two numbers:- ");
    scanf("%d%d", &n1,&n2);
    solve(n1,n2);
    return 0;
}