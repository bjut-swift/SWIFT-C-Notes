#include <stdio.h>
#include <math.h>

int main() {
    void d1(double a,double b,double delta);
    void d2(double a,double b);
    void d3(double a,double b,double delta);
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            printf("无解\n");
        } else {
            printf("方程只有一个解: x = %.2f\n", -c / b);
        }
    }
    
    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        d1(a,b,delta);
    } else if (delta == 0) {
        d2(a,b);
    } else {
        d3(a,b,delta);
    }
    return 0;
}

void d1(double a,double b,double delta)
{
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);
    printf("方程有两个实数解: x1 = %.2f, x2 = %.2f\n", x1, x2);
}

void d2(double a,double b)
{
    double x = -b / (2 * a);
    printf("方程有一个实数解: x = %.2f\n", x);
}

void d3(double a,double b,double delta)
{
    double realPart = -b / (2 * a);
    double imagPart = sqrt(-delta) / (2 * a);
    printf("方程有两个复数解: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
}

