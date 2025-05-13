#include <stdio.h>
#include <stdlib.h>
#define LEN 13

struct Chain {
    int num;
    struct Chain *next;
};

int n;

int main()
{
    struct Chain *head, *p1, *p2, *p;
    n = 0;
    head = NULL;

    for (int i = 1;i <= LEN;i++) {
        p1 = (struct Chain*)malloc(sizeof(struct Chain));
        p1->num = i;
        if (i == 1) {
            head = p1;
        } else {
            p2->next = p1;
        }
        p2 = p1;
    }
    p2->next = head;
    

    p = head;

    int count = LEN;
    int c = 0;
    while (count > 1)
    {
        if (p->num != 0)
        {
            c++;
            if (c == 3)
            {
                printf("报到3的人是 %02d 号，出圈。\n", p->num);
                p->num = 0;
                count--;
                c = 0;
            }
        }
        p = p->next;
    }

    p = head;
    while (p->num == 0)
        p = p->next;
    printf("最后剩下的是原来第 %d 号\n", p->num);

    return 0;
}
