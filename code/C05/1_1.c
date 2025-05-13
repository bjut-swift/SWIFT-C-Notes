#include <stdio.h>

int main()
{
    int m,n,t,l,g;
    scanf("%d %d", &m, &n);
    if (m > n)
    {
        t = m;
        m = n;
        n = t;
    }

    for (int i = 1;i <= m;i++)  //或 (i <= m && i <= n)
    {
        if (m % i == 0 && n % i == 0)
        g = i;
    }
    printf("最大公约数: %d\n", g);

    int i = m;
    while (1)
    {
        if (i % m == 0 && i % n == 0)   //或for(int j = m;!(i % m == 0 && i % n == 0);j++);
        {
            l = i;
            break;
        }
        i++;
    }
    printf("最小公倍数: %d\n", l);

    return 0;
}