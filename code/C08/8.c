#include <stdio.h>
#include <string.h>

int main()
{
    void reverse(char x[],int n);
    char a[100];
    printf("请输入一个字符串：");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    reverse(a,strlen(a));
    puts(a);
    return 0;
}


void reverse(char x[],int n)
{	char temp;
    int i,j,m=(n-1)/2;
    for(i=0;i<=m;i++)
    {	j=n-1-i;
        temp=x[i]; x[i]=x[j]; x[j]=temp;
    }
    return;
}

//或：指针操作
// void reverse(char *x, int n)
// {
//     char temp;
//     char *p = x, *q = x + n - 1;

//     while (p < q)
//     {
//         temp = *p;
//         *p = *q;
//         *q = temp;
//         p++;
//         q--;
//     }
// }