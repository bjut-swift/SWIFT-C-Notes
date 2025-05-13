#include <stdio.h>

int main()
{
    float a, b = 0;
    scanf("%f", &a);

    int c = (int)(a / 100000);

    switch (c)
    {
    case 0:
        b = a * 0.1;
        break;
    case 1:
        b = 10000 + (a - 100000) * 0.075;
        break;
    case 2:
    case 3:
        b = 17500 + (a - 200000) * 0.05;
        break;
    case 4:
    case 5:
        b = 27500 + (a - 400000) * 0.03;
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        b = 33500 + (a - 600000) * 0.015;
        break;
    default:
        b = 39500 + (a - 1000000) * 0.01;
        break;
    }

    printf("%.2f\n", b);
    return 0;
}
