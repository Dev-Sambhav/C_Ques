// Write a program to find greatest among three integers.

#include <stdio.h>

// Solve
int solve(int n1,int n2,int n3)
{
    if(n1>n2){
        if(n1>n3){
            return n1;
        }else{
            return n3;
        }
    }else{
        if(n2>n3){
            return n2;
        }else{
            return n3;
        }
    }
}

int main()
{
    int n1,n2,n3;
    printf("\nEnter three Number:- ");
    scanf("%d%d%d", &n1,&n2,&n3);
    int larger = solve(n1,n2,n3);
    printf("\nLarger Number:- %d",larger);
    return 0;
}