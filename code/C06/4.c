#include <stdio.h>
int main()
{
    int a[10],b[10],c;
    for (int i = 0;i < 10;i++)
		scanf("%d",&a[i]);
	printf("\n");
    for (int j = 0;j < 10;j++)
    {
        c = 9 - j;
        b[j] = a[c];
    }
    for (int i = 0;i < 10;i++)
    {
        printf("%d ",b[i]);
    }
	printf("\n");
	return 0;
}