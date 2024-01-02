#include <stdio.h>

int main()
{

    char arr[] = {'a','b','c','d'};
    char arr2[] = {'a','b','c','d', '\0'};
    char arr3[4] = {'a','b','c','d'};

    printf("size of arr:%lu\n", sizeof(arr)/sizeof(char));
    printf("arr = %s\n",arr);
    printf("arr2 = %s\n",arr2);
    printf("size of arr2:%lu\n", sizeof(arr2)/sizeof(char));
    printf("arr3 = %s\n",arr3);
    printf("size of arr3:%lu\n", sizeof(arr3)/sizeof(char));

    return 0;
}