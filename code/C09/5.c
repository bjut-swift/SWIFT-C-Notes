#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int id;
    char name[20];
    char gender;
    int age;
    struct Node *next;
} Node;

// 创建结点
Node* createNode(int id, const char *name, char gender, int age) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->id = id;
    strcpy(node->name, name);
    node->gender = gender;
    node->age = age;
    node->next = NULL;
    return node;
}

// 打印链表
void printList(Node *head) {
    printf("\n当前链表内容：\n");
    while (head) {
        printf("学号: %d\t姓名: %s\t性别: %c\t年龄: %d\n", head->id, head->name, head->gender, head->age);
        head = head->next;
    }
}

// 删除指定年龄的结点
Node* deleteByAge(Node *head, int targetAge) {
    Node *p = head, *prev = NULL;
    while (p != NULL) {
        if (p->age == targetAge) {
            if (p == head) {
                head = p->next;
                free(p);
                p = head;
            } else {
                prev->next = p->next;
                free(p);
                p = prev->next;
            }
        } else {
            prev = p;
            p = p->next;
        }
    }
    return head;
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

int main() {
    // 已知的学生数据
    int ids[] =      {1001, 1002, 1003, 1004, 1005};
    char *names[] =  {"张三", "李四", "王五", "赵六", "周七"};
    char genders[] = {'M',   'F',    'M',    'F',    'M'};
    int ages[] =     {18,    19,     20,     19,     21};

    Node *head = NULL, *tail = NULL;

    // 构造链表
    for (int i = 0; i < 5; i++) {
        Node *node = createNode(ids[i], names[i], genders[i], ages[i]);
        if (head == NULL) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    printList(head);

    int ageToDelete;
    printf("\n删除年龄为：");
    scanf("%d",&ageToDelete);
    head = deleteByAge(head, ageToDelete);

    printList(head);

    freeList(head);
    return 0;
}