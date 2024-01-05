#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s1;
    string s2 = "c plus plus";
    string s3 = s2; //变量 s3 在定义的时候直接用 s2 进行初始化
    string s4 (5, 's');

    s3[0] ='C';
    cout << s2 << ", " << s3 <<  ", " << s4 <<endl;


    int len = s4.length();
    cout << len << s1.length() <<endl;


    const char* ss= s2.c_str();
    cout << &ss << endl;
    cout << &s2 << endl;


    /* 
    有了 string 类，我们可以使用+或+=运算符来直接拼接字符串，非常方便，再也不需要使用C语言中的 strcat()、strcpy()、malloc() 等函数来拼接字符串了，再也不用担心空间不够会溢出了。
    
    运算符的两边可以都是 string 字符串，也可以是一个 string 字符串和一个C风格的字符串，还可以是一个 string 字符串和一个字符数组，或者是一个 string 字符串和一个单独的字符。
    */

    return 0;
}