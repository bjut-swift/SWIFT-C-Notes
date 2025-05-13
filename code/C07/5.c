#include <stdio.h>
#include <string.h>

void re(char c[]) {
    int len = strlen(c);

    for (int i = 0; i < len / 2; i++) {
        char temp = c[i];
        c[i] = c[len - 1 - i];
        c[len - 1 - i] = temp;
    }
}

int main() {
    char c[1000];

    printf("请输入字符串: ");
    fgets(c, sizeof(c), stdin);
    c[strcspn(c, "\n")] = '\0';

    re(c);

    printf("%s\n", c);
    return 0;
}
