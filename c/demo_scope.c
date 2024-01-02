#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE 10 // Define the size of the array

int main(int argc, char *argv[])
{
    int a = 1;
    {
        int a = 2;
        printf("a = %d\n", a);

    }
    return 0;
}