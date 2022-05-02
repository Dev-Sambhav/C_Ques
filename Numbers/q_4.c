// Write a program to print the Fibonacci series using iteration. 

#include<stdio.h>

// Solve
void solve(int n1,int n2,int t){
    printf("\nSeries:- %d %d ",n1,n2);
    int i,next;
    for(i=2;i<t;i++){
        next = (n1+n2);
        printf("%d ",next);
        n1 = n2;
        n2 = next;
    }
}
int main(){
    int n1,n2,t;
    printf("\nEnter first two number:- ");
    scanf("%d%d",&n1,&n2);
    printf("\nEnter total term:- ");
    scanf("%d",&t);
    solve(n1,n2,t);
return 0;
}