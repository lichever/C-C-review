#include <stdio.h>
#include <stdlib.h>

int main()
{

    int **p = (int **)malloc(sizeof(int *) * 2); // similar to ptr array
    // p[0], p[1]... store int* type

    p[0] = (int *)malloc(sizeof(int) * 2);
    p[1] = (int *)malloc(sizeof(int) * 3);

    p[0][0] = 1;
    p[0][1] = 2;
    p[1][0] = 3;
    p[1][1] = 4;
    p[1][2] = 5;

    for (int i = 0; i < 5; i++)
    {
        if (i >= 2)
        {
            printf("%d\n", p[1][i - 2]);
        }else{
            printf("%d\n", p[0][i]);
        }
    }

    free(p[0]);
    free(p[1]);
    free(p);

    printf("------\n");
    //wild pointer
    for (int i = 0; i < 5; i++)
    {
        if (i >= 2)
        {
            printf("%d\n", p[1][i - 2]);
        }else{
            printf("%d\n", p[0][i]);
        }
    }
    return 0;
}