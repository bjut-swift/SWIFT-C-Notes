#include <stdio.h>

int main()
{
    int a[5][5];
    int columm, row, max, min, t = 0;

    // 输入 5×5 矩阵
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }

    // 遍历每一行，寻找可能的鞍点
    for (int i = 0; i < 5; i++)
    {
        max = a[i][0]; // 该行的最大值
        columm = 0;    // 该最大值所在的列

        // 找到当前行的最大值及其列索引
        for (int j = 1; j < 5; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                columm = j;
                row = i;
            }
        }

        // 在该列中寻找最小值
        min = a[0][columm]; // 该列的最小值

        for (int k = 1; k < 5; k++)
        {
            if (a[k][columm] < min)
            {
                min = a[k][columm];
            }
        }

        // 如果 `max` 仍然等于 `min`，说明是鞍点
        if (a[row][columm] == min)
        {
            printf("a[%d][%d] = %d\n", row, columm, a[row][columm]);
            t = 1;
        }
    }

    // 如果没有找到鞍点
    if (t == 0)
        printf("无鞍点\n");

    return 0;
}
