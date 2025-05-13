#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a < 0 || a > 100) {
        printf("请输入 0-100 之间的分数\n");
    }
    else {
        switch (a / 10)
        {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;  
        default:
            printf("D\n");
            break;
        }
    }
    return 0;
}