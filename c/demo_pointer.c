#include <stdio.h>

int main()
{

    // int a = 10;
    // int b = 20;
    // int *p = &a;
    // printf("p size = %lu\n",sizeof(p));
    // printf("dereference p = %d\n",*p);
    // printf("p = %p\n",p);
    // printf("p addr = %p\n",&p);
    // printf("char* = %d\n",sizeof(char*));  //  x64 编译模式
    // // printf("p = %p\n",&(a+b));


    // int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    // int *p1 = arr;
    // printf("p[2] = %d\n",p1[2]);
    // printf("p[?] = %d\n",*(p1++));
    // printf("p[?] = %d\n",*p1);
    // printf("p[?] = %d\n",*--p1);
    // printf("p[?] = %d\n",*(p1+4));
    // printf("p[?] = %d\n",*(p1+14));//越界 danger!!
    

    // //指针数组 的 index 可以是负数
    // int *p2 = &arr[9];
    // printf("p2[?] = %d\n",*p2);
    // printf("p2[?] = %d\n",p2[-1]);
    // printf("p2[?] = %d\n",p2[-2]);


    //2d array
    int arr2d[2][3] = {{1,2,3},{4,5,6}};
    int (*p3)[2] = arr2d;
    int *p4 = arr2d;
     printf("p3[?] = %p\n",p3);
     printf("p3[?] = %p\n",p3[0]);
     printf("p3[?] = %p\n",p3[1]);
     printf("p3[?] = %p\n", arr2d);
     printf("p3[?] = %p\n", arr2d[0]);
     printf("p3[?] = %p\n", &arr2d[0][0]);
     printf("p4[?] = %d\n", p4[5]);



    return 0;
}