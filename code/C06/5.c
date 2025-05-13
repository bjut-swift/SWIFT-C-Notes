#include <stdio.h>

int main() {
    int a[13][13] = {0};

    for (int i = 0; i < 13; i++) {
        a[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j];  // 递推公式
        }
    }

    for (int i = 0; i < 13; i++) {
        for (int k = 0; k < 13 - i; k++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
