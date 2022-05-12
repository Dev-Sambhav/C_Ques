// Inverted Full Pyramid Pattern
#include<stdio.h>

// Solve Function
void solve(int n){
    int i,j,s;
    for(i=n;i>=1;i--){
        // spaces
        int totalSpaces = n-i;
        for(s=1;s<=totalSpaces;s++){
            printf("  ");
        }
        // print *
        int totalColInRow = 2*i-1;
        for(j=1;j<=totalColInRow;j++){
            printf("* ");
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