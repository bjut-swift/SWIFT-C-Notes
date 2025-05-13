#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char str2[30];
    char str3[30];
    int a = 0, b = 0, c = 0, d = 0;

    gets(str);
    gets(str2);
    gets(str3);
    strcat(str, str2);
    strcat(str, str3);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            a++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            c++;
        else if (str[i] == ' ')
            b++;
        else
            d++;
    }

    printf("大写字母个数: %d\n", a);
    printf("小写字母个数: %d\n", c);
    printf("空格个数: %d\n", b);
    printf("其他字符个数: %d\n", d);

    return 0;
}
/*
This is a poem: 
If you change lines,
it is considered a poem!
*/