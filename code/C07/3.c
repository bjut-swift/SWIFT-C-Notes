#include <stdio.h>

int main()
{
    int p(int a);
    int a;
    scanf("%d",&a);
    int t = p(a);
    if(t == 1)
    printf("%d不是素数",a);
    else
    printf("%d是素数",a);
    return 0;
}

int p(int a)
{
    int t = 0;
    for(int i = 2;i < a;i++)
    {
        if(a % i == 0)
        {
            t = 1;
            break;
        }
    }
    return t;
}