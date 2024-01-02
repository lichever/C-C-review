#include <stdio.h>
typedef long long ll;
int main()
{
    short s = 10000;
    long l = 10000000;
    int i = 10000000;
    ll ll = 100000000000000;

    printf("size of short:%lu\n", sizeof(short));
    printf("size of long:%lu\n", sizeof(long));
    printf("size of int:%lu\n", sizeof(int));
    printf("size of long long:%lu\n", sizeof(long long));

    printf("long long = %lld\n",ll);

    //进制
    printf("l = %d\n",015);//八进制
    printf("i = %d\n",0b1111);//二进制
    printf("ll = %d\n",0x11);//十六进制
    // printf("ll = %lld\n",ll);
    return 0;
}