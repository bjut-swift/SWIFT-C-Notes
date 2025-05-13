#include <stdio.h>

int main()
{
    int gcd(int m, int n);
    int glm(int m, int n);
    int m,n,t,l,g;
    scanf("%d %d", &m, &n);
    if (m > n)
    {
        t = m;
        m = n;
        n = t;
    }

    g = gcd(m,n);
    printf("最大公约数: %d\n", g);

    l = glm(m,n);
    printf("最小公倍数: %d\n", l);

    return 0;
}

int gcd(int m, int n)
{
    int g;
    for (int i = 1;i <= m;i++)
    {
        if (m % i == 0 && n % i == 0)
        g = i;
    }
    return g;
}

int glm(int m, int n)
{
    int i = m;
    int l;
    while (1)
    {
        if (i % m == 0 && i % n == 0)   //或for(int j = m;!(i % m == 0 && i % n == 0);j++);
        {
            l = i;
            break;
        }
        i++;
    }
    return l;
}