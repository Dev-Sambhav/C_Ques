// Full Pyramid Pattern
#include<stdio.h>

// Solve Function
void solve(int n){
    int i,j,s;
    for(i=1;i<=n;i++){
        // spaces
        int totalSpaces = n-i;
        for(s=1;s<=totalSpaces;s++){
            printf("  ");
        }
        int totalColInRow = 2*i-1;
        for(j=i;j<=totalColInRow;j++){
            printf("%d ",j);
        }
        for(j=totalColInRow-1;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("\nEnter Total Row Number:- ");
    scanf("%d",&n);
    solve(n);
return 0;
}