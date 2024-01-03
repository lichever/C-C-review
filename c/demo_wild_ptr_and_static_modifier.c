#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void testExtern(){

//     char *pstr;
//     func(&pstr);
// }



//函数定义放main下面，所以这里要声明一下
void func(char **pp);



int main()
{
    char *str = (char *)malloc(20 * sizeof(char));
    strcpy(str, "C语言中文网");
    puts(str);
    free(str);
    str = NULL; // freed() 只是释放掉了动态分配的内存，但并未改变 str 的值，str 的值不是 NULL，它仍然指向被释放掉的内存
    if (str)
    {
        puts(str);
    }
    /*
    arr 数组在栈上分配内存，字符串"C语言中文网"就存储在这里，func() 函数运行结束后，
    这块内存被释放掉，但是函数外部的 pstr 仍然指向这里，所以执行puts(pstr);时，输出结果是未知的。

    */
    char *pstr;
    func(&pstr);//传入的是指针的地址
    puts(pstr);


    return 20;
}

//传入是指针的地址 因为这里是改 指针 本身的值，而不是改 指针 指向的值，所以定义 二级指针
void func(char **pp)
{
    // char arr[] = "C语言中文网";//现在是在栈上的，如果加上static，那么这里的arr就是静态的，不会被释放掉，所以不会出现上面的问题 or malloc 也可以 or char *arr = "C语言中文网"

    char *arr = "C语言中文网";
    *pp = arr;
}