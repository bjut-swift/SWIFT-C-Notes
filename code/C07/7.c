#include <stdio.h>
int main()
{
    void sta(char str[],int *a, int *b, int *c, int *d);
    char str[1000];
    int a,b,c,d;
    a = b = c = d = 0;
    gets(str);
    sta(str,&a,&b,&c,&d);
    printf("字母...%d个\n数字...%d个\n空格...%d个\n其他...%d个\n",a,b,c,d);
    return 0;
}

void sta(char str[],int *a, int *b, int *c, int *d)
{
    for (int i = 0;str[i] != '\0';i++)
    {
        if  (('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z'))
        (*a)++;
        else if ('0' <= str[i] && str[i] <= '9')
        (*b)++;
        else if (str[i] == ' ')
        (*c)++;
        else
        (*d)++;
    }
}