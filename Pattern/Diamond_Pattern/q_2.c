// Left half diamond pattern
#include <stdio.h>

// Solve Function
void solve(int n)
{
    int i, j, s;
    for (i = 1; i < 2 * n; i++)
    {
        // spaces
        int totalSpaces = i > n ? i-n : n-i;
        for (s = 1; s <= totalSpaces; s++)
        {
            printf("  ");
        }
        int totalColInRow = i > n ? n - (i - n) : i;
        for (j = 1; j <= totalColInRow; j++)
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