#include <iostream>
using namespace std;

/*
struct in C++ 默认是 public 的，class 默认是 private 的
struct 可以有函数了 包括构造函数和析构函数
*/
struct Node{
    int data;
    Node *next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int data){
        this->data = data;
        next = NULL;
    }

    Node(int data, Node *next){
        this->data = data;
        this->next = next;
    }

    // Destructor
    ~Node() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main()
{   
    Node* n2 = new Node(2);
    Node* n1 = new Node(1, n2);
    Node* head = new Node(0, n1);
    while(head != nullptr){
        cout << head->data << endl;
        head = head->next;
    }
    delete n1;


    cout << (NULL == nullptr) << endl;
    return 0;
}
