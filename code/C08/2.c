#include <stdio.h>

void input(int *arr, int n);
void process(int *arr, int n);
void output(int *arr, int n);

int main()
{
    int a[10];
    input(a, 10);
    process(a, 10);
    output(a, 10);
    return 0;
}

void input(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void process(int *arr, int n)
{
    int *min = arr;
    int *max = arr;

    for (int *p = arr; p < arr + n; p++)
    {
        if (*p < *min)
            min = p;
    }

    int temp = *arr;
    *arr = *min;
    *min = temp;

    max = arr;
    for (int *p = arr; p < arr + n; p++)
    {
        if (*p > *max)
            max = p;
    }

    temp = arr[n - 1];
    arr[n - 1] = *max;
    *max = temp;
}

void output(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

 
