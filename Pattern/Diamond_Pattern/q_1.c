// Right half diamond pattern
#include<stdio.h>

// Solve Function
void solve(int n){
    int i,j;
    for(i=1;i<=2*n;i++){
        int totalColInRow = i>n ? n-(i-n) : i;
        for(j=1;j<=totalColInRow;j++){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("\nEnter total number of row:- ");
    scanf("%d",&n);
    solve(n);
return 0;
}