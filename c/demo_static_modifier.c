#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
    // 也可以不赋初值 0，静态数据区的变量默认初始化为 0
    static int result = 0;
    result += n;

    return result;
}

int main()
{
    int result, i;
    for (i = 1; i <= 100; i++)
    {
        result = sum(i);
    }
    printf("1+2+3+...+99+100 = %d\n", result);//5050

    for (i = 1; i <= 100; i++)
    {
        result = sum(i);
    }
    printf("1+2+3+...+99+100 = %d\n", result);//result初值是上次的结果，所以这里是10100
    return 0;
}
