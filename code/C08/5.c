#include <stdio.h>
#include <string.h>

int main() {
    void copyStr(char *str, int m,char *result);
    char str[1000];
    char result[1000];
    int m;

    printf("请输入一个字符串：");
    gets(str);

    printf("请输入起始切割位置m：");
    scanf("%d", &m);

    copyStr(str, m, result);
    puts(result);

    return 0;
}

void copyStr(char *str, int m,char *result)
{
    strncpy(result, str + m - 1, strlen(str) - m + 1);
}