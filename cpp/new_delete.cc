#include <iostream>

using namespace std;

/*
c++ version of demo_2d_array_heap.c

，通常 new 和 delete、new[] 和 delete[] 操作符应该成对出现，并且不要和C语言中 malloc()、free() 一起混用。


*/



int main(){
    int **p = new int* [2]; // similar to ptr array
    // p[0], p[1]... store int* type

    p[0] = new int[2];
    p[1] = new int[3];

    p[0][0] = 1;
    p[0][1] = 2;
    p[1][0] = 3;
    p[1][1] = 4;
    p[1][2] = 5;

    for (int i = 0; i < 5; i++)
    {
        if (i >= 2)
        {
             std::cout << p[1][i - 2] << std::endl;
        }else{
            std::cout << p[0][i] << std::endl;
        }
    }

    delete[] p[0];
    delete[] p[1];
    delete[] p;


    int* a= new int;
    *a = 1;
    cout << *a << endl;
    delete a;


}