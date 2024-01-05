#include <stdio.h>
#include <stdlib.h>

void func(char *str) {}

typedef struct ListNode
{
    int val;
    struct ListNode *next;
    // int arr[5];
} Node;

void printNode(const Node *node)
{
    while (node != NULL)
    {
        printf("%d\n", node->val);
        node = node->next;
    }
}

struct stu
{
    char *name;  // 姓名
    int num;     // 学号
    int age;     // 年龄
    char group;  // 所在小组
    float score; // 成绩
};

void average(struct stu *ps, int len)
{
    int i, num_140 = 0;
    float average, sum = 0;
    for (i = 0; i < len; i++)
    {
        sum += (ps + i)->score; // -> 相当于 dereference  ps[i].score
        if ( ps[i].score < 140)
            num_140++;
    }
    printf("sum=%.2f\naverage=%.2f\nnum_140=%d\n", sum, sum / 5, num_140);
}

int main()
{

    // 1 stack
    Node node1, node2;

    printf("%lu\n", sizeof(Node));
    printf("%lu\n", sizeof(node1));

    node1.val = 1;
    node2.val = 2;
    node1.next = &node2;
    node2.next = NULL;

    printf("%lu\n", sizeof(node1));

    Node cur = node1;
    while (cur.next != NULL)
    {
        printf("%d\n", cur.val);
        cur = *cur.next;
    }

    printf("%d\n", cur.val); // 输出最后一个节点的值

    // 2 heap
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

    Node *cur2 = node4; // del node4
    Node *next = cur2->next;
    Node *nextNext = cur2->next->next;
    cur2->val = next->val;
    cur2->next = nextNext;
    free(next);
    printNode(node3);

    // 3 struct array

    struct stu stus[] = {
        {"Li ping", 5, 18, 'C', 145.0},
        {"Zhang ping", 4, 19, 'A', 130.5},
        {"He fang", 1, 18, 'A', 148.5},
        {"Cheng ling", 2, 17, 'F', 139.0},
        {"Wang ming", 3, 17, 'B', 144.5}};

    int len = sizeof(stus) / sizeof(struct stu);
    average(stus, len);



    //4 struct assign
    struct stu stu1 = {"Li ping", 5, 18, 'C', 145.0};
    struct stu stu2 = stu1;
    stu2.name = "Zhang ping";

    printf("%s\n", stu1.name);//Li ping
    printf("%s\n", stu2.name);//Zhang ping
    printf("%p\n", &stu1);//0x7ff7bb500080
    printf("%p\n", &stu2);//0x7ff7bb500068


    return 0;
}