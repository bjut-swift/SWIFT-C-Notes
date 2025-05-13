#include <stdio.h>
#include <math.h>

int main() {
    double a, x, x2;
    
    scanf("%lf", &a);

    if (a < 0) {
        printf("这是个负数\n");
        return 1;
    }

    x = a / 2.0;    //初始是啥都行
    do {
        x2 = 0.5 * (x + a / x);
        if (fabs(x2 - x) < 0.00001)
            break;
        x = x2;
    }
    while (1);

    printf("平方根近似值: %.5f\n", x2);
    return 0;
}
