// Write a program to calculate LCM of a given number.

#include <stdio.h>

// Solve
void solve(int n1,int n2)
{
    int max=n1;
    if(max<n2){
        max = n2;
    }
    while(max%n1!=0 || max%n2!=0){
        max++;
    }
    printf("LCM of %d and %d is %d",n1,n2,max);
}

int main()
{
    int n1,n2;
    printf("\nEnter two Number:- ");
    scanf("%d%d", &n1,&n2);
    solve(n1,n2);
    return 0;
}