#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE 10 // Define the size of the array

int main(int argc, char *argv[])
{
    int low = 1, high = 5;
    int r = rand() % (high - low + 1) + low; //[1, 5]

    // init array a and initialize it with 0
    int a[ARRAY_SIZE]={0};
    printf("sizeof(a) = %d\n", sizeof(a));

    // memset(a, 20, sizeof(a));//函数的功能是将一块内存中的前 num 个字节设置为特定的值, 不是将数组的每个元素都设置为特定的值

    for(int i = 0; i < 1000; i++){
        int r = rand() % (high - low + 1) + low; //[1, 5]
        a[r]++;
    }

    for (int i = 1; i <= 5; i++)
    {
        printf("%d: %d\n", i, a[i]);
    }

    return 0;
}