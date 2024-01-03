#include <stdio.h>

int main(){
    const char s[] = "hello world";
    printf("%s\n", s);
    // s[0] = 'H';

    const char *p = "hello world";
    printf("%c\n", p[0]);

    // p[0] = 'H'; // error: assignment of read-only location ‘*p’

    //一级指针可以修改 const 变量的值
    const int a = 110;
    // a = 20; // error: assignment of read-only variable ‘a’
    int* pt = &a; //栈上的 const 变量可以被 指针修改
    *pt = 120;
    printf("%d, %d\n", a, *pt);




    //二级指针 修改 const int*p : 指向常量的指针
    int b = 20;
    const int* p1 = &b;
    // *p1 = 20; // error: assignment of read-only location ‘*p1’

    int **p2 = &p1;
    // *p2 = &a;
    printf("%d, %d, %d\n", b, *p1, **p2);
    **p2 = 99;
    printf("%d, %d, %d\n", b, *p1, **p2);

    return 0;
}