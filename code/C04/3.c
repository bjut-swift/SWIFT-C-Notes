#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b = a;
    c = 0;
    while (b > 0)
    {
        c++;
        b = b / 10;
    }
    if(c <= 5 && c > 0)
    {
        printf("位数是%d\n",c);
        d = 1;
        b = a;
        for (int i = 1; i < c; i++)
        {
            d = d * 10;
        }
        while (d > 0)
        {
            printf("%d ",(b / d));
            b = b % d;
            d = d / 10;
        }
        printf("\n");

        b = a;
        while (b > 0) {
            printf("%d ", b % 10);
            b = b / 10;
        }
        printf("\n");
    }
    else
    printf("请输入五位以内的数");
    
    return 0;
}