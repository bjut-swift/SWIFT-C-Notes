#include <stdio.h>

int main() {
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int num, b = 0, t = 0;

    scanf("%d", &num);

    if (num >= a[7])
    {
        for (int i = 7;i <= 14;i++)
        {
            if (num == a[i])
            {
                b = i;
                t = 1;
            }
        }
    }
    else
    {
        for (int i = 7;i >= 0;i--)
        {
            if (num == a[i])
            {
                b = i;
                t = 1;
            }
        }
    }

    if (t == 1) {
        printf("数字 %d 是数组中的第 %d 个元素。\n", num, b + 1);
    } else {
        printf("无此数\n");
    }

    return 0;
}
