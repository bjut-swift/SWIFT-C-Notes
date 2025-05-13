#include <stdio.h>
int main()
{
   int a[5][5];
   int columm,row,max,min,t = 0;
   for (int i = 0; i < 5; i++)
   {
        for (int j = 0; j < 5; j++)
        scanf("%d", &a[i][j]);
   }
   
   for (int i = 0; i < 5; i++)
   {
        max = a[i][0];
        columm = 0;
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                columm = j;
                row = i;
            }
        }
        
        min = a[0][columm];
        for (int k = 0;k < 5;k++)
        {
            if (a[k][columm] < min)
            {
                min = a[k][columm];
            }
        }
        if (a[row][columm] == min)
        {
            printf("a[%d][%d] = %d\n",row,columm,a[row][columm]);
            t = 1;
        }
   }
   if (t == 0)
   printf("无鞍点\n");
   return 0;
}
/* 
3 18 7 5 6 
6 15 2 9 8
5 16 6 2 1
2 20 9 7 4
1 15 8 4 3
*/