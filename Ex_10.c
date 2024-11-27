#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", (arr + i));
    }
    for (int i = 0; i < n; ++i)
    {
        int flag = 1;
        if (arr[i] < 2)
            flag = 0;
        else
        {
            for (int j = 2; j * j <= arr[i]; ++j)
            {
                if (arr[i] % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
        {
            printf("%d ", arr[i]);
        }
    }
}