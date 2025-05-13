#include <stdio.h>

int main()
{
    int minus(int (*arr)[4]);
    int a[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int c = minus(a); 
    printf("%d",c);
    return 0;
}
int minus(int (*arr)[4])    //列等
{
    int max = arr[0][0];
    int min = arr[0][0];

    // int i, j, k, l;
    // k = l = **arr;  //对应arr[0][0]
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            if(max < arr[i][j])
            // if(max < *(*(p + i) + j))
            max = arr[i][j];
            if(min > arr[i][j])
            min = arr[i][j];
        }
    }
    return max - min;
}