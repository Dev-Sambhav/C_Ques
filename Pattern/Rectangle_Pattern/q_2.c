// Hollow Rectangle
#include <stdio.h>

// Solve Function
void solve(int r,int c)
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if(i==1 || j==1 || j==c || i==r){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int r,c;
    printf("\nEnter number of row:- ");
    scanf("%d", &r);
    printf("Enter number of column:- ");
    scanf("%d", &c);
    solve(r,c);
    return 0;
}