#include <stdio.h>

typedef enum week
{
    Mon = 1,
    Tues,
    Wed,
    Thurs,
    Fri,
    Sat,
    Sun
} WeekDay;

typedef enum
{
    true = 1,
    false = 0
} bool;

typedef struct ListNode
{
    int val;
    struct ListNode *next;
    char arr[15];
} Node;

int main()
{
    WeekDay day;
    printf("%d\n", day);
    day = Fri;
    printf("%d\n", day);

    printf("%lu, %lu, %lu, %lu, %lu\n", sizeof(enum week), sizeof(day), sizeof(Mon), sizeof(Wed), sizeof(int));

    Node node1, node2;
    node1.val = 1;
    // node1.arr = "asd";//数组名不能赋值，是常量，只能初始化

    bool flag = true;
    printf("%d\n", flag);
    printf("%d\n", !flag);



    return 0;
}