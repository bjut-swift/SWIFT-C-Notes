#include <stdio.h>
int main()
{
    int year;
    printf("请输入要判断的年份：\n");
    scanf("%d",&year);    
    if(year <= 2500 && year >= 2000){
        if((year % 4 == 0 && year % 100 != 0)||year % 400 == 0){
            printf("%d是闰年",year);
        }
        else{
            printf("%d不是闰年",year);
        }
    }
    else{
        printf("请输入2000——2500内的年份！");
    }
    return 0;
}