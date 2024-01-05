#include <iostream>
using namespace std;



//函数重载 not support in C
void func(int &a)
{
    cout << "func (int &a) 调用 " << endl;
}

void func(const int &a)
{
    cout << "func (const int &a) 调用 " << endl;
}


int main() {
    int a = 99;
    int &r = a;
    cout << a << ", " << r << endl;
    cout << &a << ", " << &r << endl;

    r = 100;
    cout << a << ", " << r << endl;

    int b = 200;
    r = b;
    cout << a << ", " << r << endl;

    //const type &name = value;
    //没有  type & const name = value; 因为 引用 本来就不能改变指向，加上 const 是多此一举。
    //指针可以有多级，但是引用只能有一级
    //对引用使用 ++ 表示它所指代的数据本身加 1
    const int &c = b;
    // c = 44; //error
    cout << b << ", " << c << endl;



    cout << sizeof(&c) << ", "  << sizeof(b) << endl;
    func(b);
    func(10);

    return 0;
}

