#include <stdio.h>

void reverse(int *arr, int n, int m) {
    int temp[1000];

    for (int i = 0; i < m; i++) {
        temp[i] = arr[n - m + i];
    }

    for (int i = n - m - 1; i >= 0; i--) {
        arr[i + m] = arr[i];
    }

    for (int i = 0; i < m; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, m;
    printf("输入数组长度 n：");
    scanf("%d", &n);

    int arr[1000];
    printf("输入 %d 个整数：", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("输入移动位数 m：");
    scanf("%d", &m);

    reverse(arr, n, m);

    printf("调整后数组：");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}