#include <stdio.h>
int n;
int main()
{
    void tr(int n);
    scanf("%d",&n);
    if(n < 0)
    {
        putchar('-');
        n = -n;
    }
    tr(n);
    return 0;
}

void tr(int n)
{
    if((n / 10) != 0)
    tr(n / 10);
    putchar(n % 10 + 48);
}

// 字符型与数字型差48
//如：A = B + '0' - 0
//此处 '0' - 0 = 48

/*
int main()
{
    int a[10];
    while (n != 0)
    {
        a[i] = n % 10;
        i++;
        n = n / 10;
    }
    
    int b[10]
    for(j = 0, k = i - 1;k > 0;j++, k--)
    {
        b[j] = a[k];
    }
    
}
*/