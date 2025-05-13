#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int start, end;

    printf("请输入一个字符串：");
    gets(str);

    printf("请输入起始位：");
    scanf("%d", &start);

    printf("请输入终止位：");
    scanf("%d", &end);

    if (start < 0 || end >= strlen(str) || start > end) {
        printf("输入范围不合法！\n");
        return 1;
    }

    printf("截取的字符串是：");
    char *p = str + start - 1;
    while (p <= str + end - 1) {
        putchar(*p);
        p++;
    }
    // 或者数组的形式：
    // for (int i = start - 1; i <= end; i++) {
    //     putchar(str[i]);
    // }

    // 再或
    // a[end] = '\0';
    // puts(p);
    printf("\n");

    return 0;
}
