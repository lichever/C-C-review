#include <stdio.h>

int global_ = 0;
int main(void)
{

    int i = 1725;

    char buffer[10] = {"\0"};

    int radix = 10;

    // itoa(i, s, radix);//not standard function

    sprintf(buffer, "%o", i); //就 没法 搞 二进制，其他都行 %o是八进制，%x是十六进制 %d是十进制

    printf("buffer in int = %s\n", buffer);


    global_ = 1;
    printf("global_ = %d\n", global_);
    printf("%lu\n", sizeof(char));
    return 0;
}