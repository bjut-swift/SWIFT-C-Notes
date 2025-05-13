#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int a = 0, b = 0, c = 0, d = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; //去除 \n

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            a++;
        else if (str[i] >= '0' && str[i] <= '9')
            c++;
        else if (str[i] == ' ')
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
