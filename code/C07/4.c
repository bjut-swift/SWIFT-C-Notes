#include <stdio.h>
int main()
{
    void tr(int a[3][3]);
    int a[3][3];
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    tr(a);
    
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}

void tr(int a[3][3])
{
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}