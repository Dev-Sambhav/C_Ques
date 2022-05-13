// Solid Rhombus Left Inclined
#include <stdio.h>

// Solve Function
void solve(int n)
{
    int i, j, s,t=0;
    for (i = 1; i <= n; i++)
    {

        int totalSpaces = t++;
        for (s = 1; s <= totalSpaces; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= n; j++)
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