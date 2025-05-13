#include <stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d %d %d",&a,&b,&c);
    if(a == b||a == c||b == c)
    printf("有相等的数");
    else if ((a > b && a < c) || (a < b && a > c))
        t = a;
    else if ((b > a && b < c) || (b < a && b > c))
        t = b;
    else
        t = c;
    printf("中间的数是%d",t);
    return 0;
}