#include <iostream>
using namespace std;

class Person
{
public:
    // 构造函数
    Person()
    {
        cout << "Person的构造函数调用" << endl;
    }

    Person(int a)
    {
        cout << "Person的有参构造函数调用" << endl;
    }

    // 析构函数
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }

    void say(){
        sing();
    }

    void sing(){
        cout << "Person::sing" << endl;
    }
};



//protected vs private
class Base
{
private:
    int privateMember;

protected:
    int protectedMember;

public:
    // Public members...
    void say(){
        protectedMember = 11;
        cout << protectedMember << endl;
    }
};

class Derived : public Base
{
public:
    void accessMembers()
    {
        // privateMember is not accessible here (private).
        // protectedMember is accessible here (protected).
        // Base::protectedMember += 2;
        // Base::private = 20;
        cout<< Base::protectedMember << endl;
    }
};

int main()
{   
    Person p, p2(2);

    p.say();

    int* q = NULL;
    int* qq = nullptr;

    return 0;
}
