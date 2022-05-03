// Write a program to print the Fibonacci series using recursion.

#include<stdio.h>

// Solve
void solve(int n1,int n2,int t){
    int next;
    if(t>2){
        next = (n1+n2);
        printf("%d ",next);
        n1 = n2;
        n2 = next;
        t--;
        solve(n1,n2,t);
    }
}
int main(){
    int n1,n2,t;
    printf("\nEnter first two number:- ");
    scanf("%d%d",&n1,&n2);
    printf("\nEnter total term:- ");
    scanf("%d",&t);
    printf("\nSeries:- %d %d ",n1,n2);
    solve(n1,n2,t);
return 0;
}