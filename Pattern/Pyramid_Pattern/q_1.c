// Half Pyramid Pattern Using *
#include<stdio.h>

// Solve Function
void solve(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("\nEnter Row Number:- ");
    scanf("%d",&n);
    solve(n);
return 0;
}