#include <stdio.h>

int main()
{
    int n, m;
    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    int A[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            scanf("%d", &A[i][j]);
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
                printf("%d ", A[i][j]);
    }
}