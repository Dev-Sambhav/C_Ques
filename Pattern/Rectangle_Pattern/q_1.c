// Solid Rectangle
#include <stdio.h>

// Solve Function
void solve(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        int totalColsInRow = n+1;
        for (j = 1; j <= totalColsInRow; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("\nEnter total number of row:- ");
    scanf("%d", &n);
    solve(n);
    return 0;
}