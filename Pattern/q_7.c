// Right Half Pyramid Pattern
#include <stdio.h>

// Solve Function
void solve(int n)
{
    int i, j, s;
    for (i = 1; i <= n; i++)
    {
        // spaces
        int totalSpaces = n - i;
        for(s=1;s<=totalSpaces;s++){
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("\nEnter Total Row Number:- ");
    scanf("%d", &n);
    solve(n);
    return 0;
}