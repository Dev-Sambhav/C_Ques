// Right Inverted Half Pyramid Pattern Using *
#include<stdio.h>

// Solve Function
void solve(int n){
    int i,j,s;
    for(i=n;i>0;i--){
        for(s=0;s<5-i;s++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
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