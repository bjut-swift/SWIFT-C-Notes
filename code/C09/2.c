#include <stdio.h>
#define N 5
struct Student
{
    int num;
    char name[20];
    float score[3];
};

void input(struct Student *s, int n)
{
    for(int i = 0;i < n;i++)
    {
        scanf("%d %s %f %f %f",&s[i].num, s[i].name, &s[i].score[0], &s[i].score[1], &s[i].score[2]);
    }
}

void output(struct Student *s, int n)
{
    for(int i = 0;i < n;i++)
    {
        printf("学号：%d\t姓名：%s\t成绩（3科）：%.2f %.2f %.2f\n",s[i].num, s[i].name, s[i].score[0], s[i].score[1], s[i].score[2]);
    }
}

int main()
{
    struct Student stu[N];
    input(stu, N);
    output(stu, N);
    return 0;
}