#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {// 必须是const void *类型
    int *pa = (int *)a;
    int *pb = (int *)b;
    return *pa < *pb ? 1 : *pa > *pb ? -1 : 0;
}

// int compare2(int a, int b) {
//     return a < b ? 1 : a > b ? -1 : 0;
// }

int main()
{
    int a[] = {3,2,4,5,6,4};
    int len = sizeof(a)/sizeof(a[0]);

    qsort(a,len,sizeof(int),compare);

    for(int i=0;i<len;i++) {
        printf("%d ",a[i]);
    }

    return 0;
}
    