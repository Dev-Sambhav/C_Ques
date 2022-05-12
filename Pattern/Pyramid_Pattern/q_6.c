// Inverted Half Pyramid Pattern
#include<stdio.h>

// Solve Function
void solve(int n){
    int i,j;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
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