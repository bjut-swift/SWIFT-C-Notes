#include <stdio.h>
#include <malloc.h>
#define LEN sizeof()

struct Student{

};

int main()
{
    struct Student *p, *pt, *head;
    int i, length, iage, flag = 1;
    int find = 0;

    while(flag == 1)
    {
        scanf("%d",&length);
        if(length < 10)
        flag = 0;
    }

    for(i = 0;i < length;i++)
    {
        p = (struct Student *)malloc(LEN)
        if(i == 0)
        head = pt = p;
        else
        pt->next = p;
        pt = p;
        scanf("%s %s %d",p->num, p->name, p->age);
    }
    p->next = NULL;
    p = head;

    scanf("%d",&iage);
    while(head->age == iage)    //直到head指向不被删的结点
    {
        head = head->next;
    }
    p = head;
    pt = p->next;
    while(pt != NULL)
    {
        if(pt->age == iage)
        {
            p->next = pt->next;
            find = 1;
        }
        else 
        p = pt;
        pt = pt->next;
    }

    if(!find)
    printf("没有这个年龄的");
    p = head;
    while(p != NULL)
    {
        printf("%4s %8s", p->num, p->name);
        p = p->next;
    }
    return 0;
}