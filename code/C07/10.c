#include <stdio.h>

// 递归函数：将整数 n 转换成字符串
void intToStr(int n, char str[], int *index) {
    // 递归终止条件
    if (n == 0) {
        return;
    }

    // 递归处理 n / 10 的部分
    intToStr(n / 10, str, index);

    // 处理当前数字
    str[(*index)++] = (n % 10) + '0';
}

int main() {
    int n;
    printf("请输入一个整数: ");
    scanf("%d", &n);

    char str[50]; // 预留足够空间存储转换后的字符串
    int index = 0;

    if (n == 0) {
        str[index++] = '0';  // 处理输入为 0 的情况
    } else if (n < 0) {
        str[index++] = '-';  // 处理负数
        n = -n;
    }

    intToStr(n, str, &index);
    str[index] = '\0';  // 确保字符串正确结束

    printf("转换后的字符串: %s\n", str);
    
    return 0;
}
