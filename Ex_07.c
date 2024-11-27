#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; ++i)
    {
        printf("\nNhap phan tu thu %d: ", i + 1);
        while (1)
        {
            scanf("%d", (A + i));
            if (A[i] % 2 != 0)
                break;
            printf("Nhap so le:");
        }
    }
    for (int i = 0; i < n; ++i)
        printf("%d ", A[i]);
}