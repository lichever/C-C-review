#include <stdio.h>
int main() {
    char a = '1';
    char b = '$';
    char c = 'X';
    char d = ' ';

    //使用 putchar 输出
    putchar(a); putchar(d);
    putchar(b); putchar(d);
    putchar(c); putchar('\n');
    //使用 printf 输出
    printf("%c %c %c\n", a, b, c);

    char bb = 170; //超出范围，会发生溢出，直接截断后半部分了
    printf("bb: %c, %d\n", bb, bb);



    char str[10];
    str[0] = 'a';
    str[1] = 'b';
    // str[2] = '\0';//字符串结束符,对应的ASCII码的值是0
    str[2] = 0;//或直接写出0
    str[3] = 'c';
    str[4] = 'd';
    printf("%d\n", str[2]);
    printf("%d\n", str[3]);

    printf("%s\n", str);

    //char  unsigned char
    char c1 = 255; //-1
    unsigned char c2 = 255;
    printf("c1 = %d, c2 = %d\n", c1, c2);

    printf("%%30\n");

    return 0;
}