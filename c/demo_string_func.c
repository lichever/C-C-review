#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "avc";
    char str2[50] = "http://c.biancheng.net/cpp/u/jiaocheng/";
    strcpy(str1, str2);
    printf("str1: %s\n", str1);

    char str3[50] = "avc";
    char str4[50] = "http://c.biancheng.net/cpp/u/jiaocheng/";
    strcpy(str4, str3);
    printf("str4: %s\n", str4);

    for (size_t i = 0; i < 50; i++)
    {
        printf("%c\n", str4[i]);
    }


    char a[] = "aBcDeA";
    char b[] = "AbCdEf";
    char c[] = "aacdef";
    char d[] = "aBcDe";
    printf("a VS b: %d\n", strcmp(a, b));
    printf("a VS c: %d\n", strcmp(a, c));
    printf("a VS d: %d\n", strcmp(a, d));


    

    return 0;
}