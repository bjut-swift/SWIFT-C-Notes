#include <stdio.h>

struct Date {
    int year;
    int month;
    int day;
};

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int count(struct Date d) {
    int days = 0;
    int month_days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (isLeapYear(d.year)) {
        month_days[1] = 29;
    }
    for (int i = 0; i < d.month - 1; i++) {
        days += month_days[i];
    }

    days += d.day;
    return days;
}

int main() {
    struct Date date;
    printf("请输入日期（年 月 日）：");
    scanf("%d %d %d", &date.year, &date.month, &date.day);

    int result = count(date);
    printf("这是 %d 年的第 %d 天\n", date.year, result);
    return 0;
}
