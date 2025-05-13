#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义链表节点结构体
typedef struct Node {
    int id;
    char name[20];
    struct Node *next;
} Node;

// 创建新节点
Node* createNode(int id, const char *name) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->next = NULL;
    return newNode;
}

// 创建链表（从头插法）
Node* createList(int ids[], const char *names[], int len) {
    Node *head = NULL, *tail = NULL;
    for (int i = 0; i < len; i++) {
        Node *node = createNode(ids[i], names[i]);
        if (head == NULL) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    return head;
}

// 打印链表
void printList(Node *head) {
    while (head) {
        printf("学号: %d, 姓名: %s\n", head->id, head->name);
        head = head->next;
    }
}

// 删除 a 链表中学号与 b 链表中相同的节点
void deleteSame(Node **a, Node *b) {
    Node *pa, *pre, *temp;
    while (b) {
        pa = *a;
        pre = NULL;
        while (pa) {
            if (pa->id == b->id) {
                if (pre == NULL) {
                    *a = pa->next;
                } else {
                    pre->next = pa->next;
                }
                temp = pa;
                pa = pa->next;
                free(temp);
            } else {
                pre = pa;
                pa = pa->next;
            }
        }
        b = b->next;
    }
}

// 释放链表内存
void freeList(Node *head) {
    Node *temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// 主函数测试
int main() {
    int idsA[] = {1001, 1002, 1003, 1004, 1005};
    const char *namesA[] = {"Tom", "Jerry", "Alice", "Bob", "Eve"};
    Node *a = createList(idsA, namesA, 5);

    int idsB[] = {1002, 1004};
    const char *namesB[] = {"Jerry", "Bob"};
    Node *b = createList(idsB, namesB, 2);

    printf("原链表 A：\n");
    printList(a);
    printf("\n链表 B（要删除的学号）：\n");
    printList(b);

    deleteSame(&a, b);

    printf("\n删除后的链表 A：\n");
    printList(a);

    freeList(a);
    freeList(b);
    return 0;
}
