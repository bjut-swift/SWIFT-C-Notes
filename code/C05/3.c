#include <stdio.h>
int main()
{
    long long t;
    long long sum = 0;
    for(int i = 1;i <= 20;i++)
    {
        t = 1;
        for(int j = 1;j <= i;j++)
        t *= j;
        sum += t;
    }
    printf("%lld",sum);
    return 0;
}