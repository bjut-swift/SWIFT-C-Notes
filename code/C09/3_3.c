#include <stdio.h>
#define N 10

struct Chain {
    int num;
    struct Chain *next;
}link[N];

int n;

int main()
{
    for(int i = 0;i < N;i++)
    {
        if(i == N - 1)
        link[i].next = &link[0];
        else
        link[i].next = &link[i + 1];

        link[i].num = i + 1;
    }

    int j = 0;
    n = N;
    struct Chain *head = &link[0], *p;
    p = head;

    while(n > 1)
    {
        if(p->num > 0)
        {
            j++;
            if(j == 3)
            {
                printf("第%d号因报到3离开了\n",p->num);
                p->num = 0;
                n--;
                j = 0;
            }
        }
        p = p->next;
    }

    p = head;
    while(p->num == 0)
    {
        p = p->next;
    }
    printf("最后一个是%d\n",p->num);
    return 0;
}