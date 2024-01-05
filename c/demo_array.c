#include <stdio.h>

//函数重载 not support in C
void func()
{
}
// void func(int a)
// {
// }


int main()
{

    int arr[10];
    printf("size of arr:%lu\n", sizeof(arr)/sizeof(int));

    //C99 only 动态数组
    int n;
    scanf("%d", &n);
    int b[n];
    printf("size of b:%lu\n", sizeof(b)/sizeof(int));


    


    return 0;
}