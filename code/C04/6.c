#include <stdio.h>
#include <math.h>
//已经掌握了数组[][]用法

int main() {
    double c[4][2] = {
        {2, 2}, {-2, 2}, {2, -2}, {-2, -2}  //定义了个二维数组，四行两列把四个圆心放进去了
    };

    double x, y;
    scanf("%lf %lf", &x, &y);

    double h = 0.0;

    for (int i = 0; i < 4; i++) {
        double dx = x - c[i][0];
        double dy = y - c[i][1];    //(x−x0​)^2 + (y−y0​)^2 ≤ r^2，则点在圆内
        if (dx * dx + dy * dy <= 1){    //1为r^2
            h = 10.0;
            break;
        }
    }

    printf("%.2f\n", h);
    return 0;
}