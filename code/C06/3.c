#include <stdio.h>

int main() {
    int a[10] = {1, 7, 8, 17, 23, 24, 59, 62, 101};
    int b, i, j;

    scanf("%d", &b);

    for (i = 0; i < 9; i++) {
        if (a[i] > b)
            break;
    }
    for (j = 9; j > i; j--) {
        a[j] = a[j - 1];
    }
    a[i] = b;
/*  或者这样写，把输入值放到第10位
    for(i=9;i>0;i--)
    {
        if(a[i]<a[i-1])
        {
        t = a[i-1];
        a[i-1]=a[i];
        a[i]=t;
        }
    }
*/
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
