#include <stdio.h>
#include <stdlib.h>
#define N 13

typedef struct Chain {
    int num;
    struct Chain* next;
} Chain;

int main() {
    int i, count = 1;
    Chain *head = NULL, *p2 = NULL, *p = NULL, *prev = NULL;

    for (i = 1; i <= N; i++) {
        Chain* p1 = (Chain*)malloc(sizeof(Chain));
        p1->num = i;
        p1->next = NULL;
        if (head == NULL) {
            head = p1;
            p2 = p1;
        } else {
            p2->next = p1;
            p2 = p1;
        }
    }
    p2->next = head;

    p = head;

    while (p->next != p) {
        count = 1;
        while (count != 3) {
            prev = p;
            p = p->next;
            if (++count == 3) break;
        }

        printf("出圈的人：%d\n", p->num);
        prev->next = p->next;
        free(p);
        p = prev->next; 
    }

    printf("最后留下的人是原来的第 %d 号\n", p->num);
    free(p);

    return 0;
}
