#include <stdio.h>
#define N 10

int main()
{
    int a[N];
    int i;
    int count = N; // 圈内人数
    int num = 0;   // 报数用
    int pos = 0;   // 当前报数人位置
    int exit = 1;

    // 初始化：每个人的编号是 1 ~ N
    for (i = 0; i < N; i++)
        a[i] = i + 1;

    while (count > 1)  // 直到剩下一个人
    {
        if (a[pos] != 0)  // 如果这个人还没出圈
        {
            num++;  // 报数
            if (num == exit)  // 报到exit，出圈
            {
                printf("报到 %02d 的人是 %02d 号，出圈。\n", exit, a[pos]);
                a[pos] = 0;
                count--;   // 少一个人
                num = 0;   // 报数重置
                exit++;
            }
        }
        pos = pos + 1;
        if (pos >= N)
        pos = 0;
    }

    // 找出剩下的那个人
    for (i = 0; i < N; i++)
    {
        if (a[i] != 0)
        {
            printf("最后剩下的是原来第 %d 号\n", a[i]);
            break;
        }
    }

    return 0;
}
