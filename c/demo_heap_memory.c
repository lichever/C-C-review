#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N (5)
#define N1 (7)
#define N2 (3)

int main()
{
    int *ip;
    int *large_ip;
    int *small_ip;
    if ((ip = (int *)malloc(N * sizeof(int))) == NULL)
    {
        printf("memory allocated failed!\n");
        exit(1);
    }

    printf("ip address: %p\n", ip);


    int i;
    for (i = 0; i < N; i++)
    {
        ip[i] = i;
        printf("ip[%d] = %d\t", i, ip[i]);
    }
    printf("\n");

    if ((large_ip = (int *)realloc(ip, N1 * sizeof(int))) == NULL)
    {
        printf("memory allocated failed!\n");
        exit(1);
    }

    printf("ip address after realloc: %p\n", ip);
    printf("large_ip address after realloc: %p\n", large_ip);
    printf("ip value: %d, %d \n", ip[0], ip[1]);


    //这里的ip和large_ip指向的地址是一样的，但是ip指向的地址已经被释放了，后面realloc出错了
    free(ip);
    ip = NULL;

    sleep(1);

    printf("large_ip val after realloc: %d\n", large_ip[0]);

    for (i = N; i < N1; i++)
        large_ip[i] = 9;
    for (i = 0; i < N1; i++)
        printf("large_ip[%d] = %d\t", i, large_ip[i]);
    printf("\n");

    if ((small_ip = (int *)realloc(large_ip, N2 * sizeof(int))) == NULL)
    {
        printf("memory allocated failed!\n");
        exit(1);
    }
    for (i = 0; i < N2; i++)
        printf("small_ip[%d] = %d\t", i, small_ip[i]);
    printf("\n");


    //test if realloc will collect the memory


    free(small_ip);
    small_ip = NULL;

    // free(ip);





    return 0;
}