#include <stdio.h>

int lastCount(int n) {
    int last = 0;
    for (int i = 2; i <= n; i++) {
        last = (last + 3) % i;  //递推：f(n, k) = (f(n-1, k) + k) % n
    }
    return last + 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int last = lastCount(n);
    printf("最后剩下的是%d\n", last);
    return 0;
}