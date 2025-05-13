#include <stdio.h>
int main()
{
    char a[] = "*  *  *  *  *";
    for (int i = 0;i < 5;i++)
    {
        if (i == 1 || i == 3)   //奇数行 (i % 2 == 1)
        printf("  ");
        puts(a);       
    }
    return 0;
}