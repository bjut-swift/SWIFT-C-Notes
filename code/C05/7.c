#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++) 
    {
        for (int a = 0; a < 2 * i - 1; a++)
        {
            printf("*   ");
        }
        printf("\n");
    }
    for (int i = 3; i >= 1; i--)
    {
        for (int a = 0; a < 2 * i - 1; a++) 
        {
            printf("*   "); 
        }
        printf("\n");
    }
    return 0;
}