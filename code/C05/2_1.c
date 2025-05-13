#include <stdio.h>

int main() {
    char str;
    int a = 0, b = 0, c = 0, d = 0;

    while ((str = getchar()) != '\n')
    {
        if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
            a++;
        else if (str >= '0' && str <= '9')
            c++;
        else if (str == ' ')
            b++;
        else
            d++;
    }

    printf("字母个数: %d\n", a);
    printf("空格个数: %d\n", b);
    printf("数字个数: %d\n", c);
    printf("其他字符个数: %d\n", d);

    return 0;
}
