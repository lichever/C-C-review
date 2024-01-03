#include <stdio.h>
#include <stdlib.h>

void func(char *str){ }


typedef struct ListNode{
    int val;
    struct ListNode *next;
}Node;


void printNode(const Node *node){
    while (node != NULL)
    {
        printf("%d\n", node->val);
        node = node->next;
    }
}


int main(){

    //1 stack
    // Node node1, node2;
    // node1.val = 1;
    // node2.val = 2;
    // node1.next = &node2;
    // node2.next = NULL;

    // Node cur = node1;
    // while(cur.next != NULL){
    //     printf("%d\n", cur.val);
    //     cur = *cur.next;
    // }

    // printf("%d\n", cur.val); // 输出最后一个节点的值


    //2 heap
    Node *node3 = malloc(sizeof(Node));
    Node *node4 = malloc(sizeof(Node));
    Node *node5 = malloc(sizeof(Node));
    Node *node6 = malloc(sizeof(Node));
    node3->val = 3;
    node4->val = 4;
    node5->val = 5;
    node6->val = 6;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    printNode(node3);
    printf("------\n");
    
    Node* cur2 = node4;//del node4
    Node* next = cur2->next;
    Node* nextNext = cur2->next->next;
    cur2->val = next->val;
    cur2->next = nextNext;
    free(next);
    printNode(node3);

    return 0;
}