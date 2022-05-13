// Pascal's Triangle
#include<stdio.h>

// Solve Function
void solve(int n){
    int i,j,t=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i==1 || j==1){
                t = 1;
            }else{
                t=t*(i-j+1)/(j-1);
            }
            printf("%d ",t);
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