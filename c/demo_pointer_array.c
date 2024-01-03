#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int a[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

    int(*p)[4] = a;                 // 指向数组的指针，指向的数组的每个元素都是 int [4];p是一个指针，指向的数组的 int [4], sizeof(p) = 8
    int *q[3] = {a[0], a[1], a[2]}; // 指针数组，数组中的每个元素都是 int *; q是一个数组size3，数组中的每个元素都是 int *; sizeof(q) = 24

    // 取值是一样的
    printf("p[1][0] = %d\n", p[1][0]); // 4
    printf("q[1][0] = %d\n", q[1][0]); // 4

    // 但是类型不一样
    printf("sizeof(a) = %lu\n", sizeof(a)); // 48，a是一个二维数组 名字(也表地址)，但不是指针
    printf("sizeof(p) = %lu\n", sizeof(p)); // 8， p就是一个指针变量
    printf("sizeof(q) = %lu\n", sizeof(q)); // 24

    printf("sizeof(a[0]) = %lu\n", sizeof(a[0])); // 16
    printf("sizeof(p[0]) = %lu\n", sizeof(p[0])); // 16
    printf("%lu, %lu\n", sizeof(*p), sizeof(*a)); // 这里和上面一样，表示一维数组int[4]的名字，不是指针
    printf("sizeof(q[0]) = %lu\n", sizeof(q[0])); // 8



    printf("%lu\n", sizeof(a+1));//这个时候退化为指针了，指针的大小，sizeof(a) // 48
    printf("%d\n",  *(*(a+1)+1));
    printf("%d\n",  *(*(p+1)+1));


}
