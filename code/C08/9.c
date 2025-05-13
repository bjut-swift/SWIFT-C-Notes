#include <stdio.h>

int main()
{
    int count_max(int *arr, int n);
    int a[] = {3, 5, 2, 5, 1, 5, 4};
    int len = sizeof(a) / sizeof(a[0]);

    int count = count_max(a, len);
    printf("最大元素出现了 %d 次。\n", count);

    return 0;
}

int count_max(int *arr, int n)
{
    int max = *arr;
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    for (int i = 1;i < n;i++)
    {
        if (*(arr + i) == max)
        {
            count++;
        }
    }

    return count;
}
