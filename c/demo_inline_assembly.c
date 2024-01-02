#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {

    int a;
    __asm__(
        "movl %0, %%eax" // Specify the size of the operand as 'l' for long (32-bit)
        : "=r" (a)       // Output constraint for the value of 'a'
        : "r" (3)        // Input constraint for the immediate value 3
        : "%eax"         // Clobbered register
    );

    printf("a = %d\n", a);
    return 0;
}