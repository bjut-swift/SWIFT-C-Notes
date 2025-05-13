#include <stdio.h>
int main()
{
    int a,b;
    scanf("%c",&a);
    a = a + 32;
    printf("%c%c%c%c%c%c\n %c%c%c%c%c%c\n%c%c%c%c%c%c\n %c%c%c%c%c%c\n%c%c%c%c%c%c\n这是一条分界线\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 1) {
            printf(" ");  // 偶数行添加前导空格
        }
        for (int j = 0; j < 6; j++) {
            printf("%c", a);
        }
        printf("\n");
    }
}