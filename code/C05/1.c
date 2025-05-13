#include <stdio.h>

int main() {
    int gcd(int a, int b);
    int m, n;
    scanf("%d %d", &m, &n);

    int g = gcd(m, n);
    int l = (m * n) / g;

    printf("最大公约数: %d\n", g);
    printf("最小公倍数: %d\n", l);

    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
/*两个数的最大公约数等于其中较小的数与两数之差的最大公约数
直到 b = 0 ，此时 a 即为最大公约数 */