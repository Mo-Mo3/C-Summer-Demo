#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// 创建新节点
Node* createNode(int val) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // 手动构建简单链表
    Node *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    // 遍历打印链表
    Node *p = head;
    while(p != NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");

    return 0;
}
