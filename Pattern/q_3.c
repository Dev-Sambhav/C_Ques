// Half Pyramid Pattern
#include<stdio.h>

// Solve Function
void solve(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<i+1;j++){
            printf("%d ",j);
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