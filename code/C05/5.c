#include <stdio.h>
int main()
{
    int sum = 1;
    for (int i = 9;i >= 1;i--)
    {
        sum = 2 * (sum + 1);
    }
    printf("%d",sum);

    return 0;
}