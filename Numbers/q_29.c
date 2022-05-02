// Write a program to find GCD or HCF of two numbers.

#include <stdio.h>

// Solve
void solve(int n1,int n2)
{
    int min=n1;
    if(min>n2){
        min = n2;
    }
    while(n1%min!=0 || n2%min!=0){
        min--;
    }
    printf("HCF of %d and %d is %d",n1,n2,min);
}

int main()
{
    int n1,n2;
    printf("\nEnter two Number:- ");
    scanf("%d%d", &n1,&n2);
    solve(n1,n2);
    return 0;
}