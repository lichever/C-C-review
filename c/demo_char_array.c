#include <stdio.h>
#include <string.h>

int main()
{

    char arr[] = {'a','b','c','d'};
    char arr2[] = {'a','b','c','d', '\0','e','e'};
    char arr3[3] = {'a','b','c','d'};

    printf("size of arr:%lu\n", sizeof(arr)/sizeof(char));
    printf("arr = %s\n",arr);
    printf("arr2 = %s\n",arr2);
    printf("size of arr2:%lu\n", sizeof(arr2)/sizeof(char));
    printf("arr3 = %s\n",arr3);
    printf("size of arr3:%lu\n", sizeof(arr3)/sizeof(char));


    printf("%lu, %lu, %lu\n", strlen(arr), strlen(arr2), strlen(arr3));

    //string array
    char strs[][10] = {"hello", "world yeah"};
    printf("%lu\n", sizeof(strs)/sizeof(strs[0]));//2
    printf("%lu\n", sizeof(strs));//20
    for (size_t i = 0; i < sizeof(strs)/sizeof(strs[0]); i++)
    {
        printf("%s\n", strs[i]);
    }
    

    char ss[10];
    // ss = "hello"; //error: assignment to expression with array type
    /*
    
ss 数组名表示的是一个固定大小的、连续存储空间的首地址。其不能 被修改 指向。
但并不是指针，也不是常量指针。

数组名： ss 在这里是一个数组名，表示了一个字符数组的首地址，指向数组的起始位置。

不是指针： 虽然数组名在某些情况下会转换为指向首元素的指针，但它不是一个指针变量。数组名本身并没有存储地址的能力，它表示整个数组的起始位置。

不是常量指针： 常量指针是一个指针变量，它指向的地址是不可更改的。但是数组名并不是一个指针变量，因此也不是常量指针。数组名不能被重新赋值，但这并不意味着它是一个常量指针，它只是代表了数组的首地址。
    
    
    */

    char *sss = NULL;

    sss = "hello";
    sss = "world";


    return 0;
}