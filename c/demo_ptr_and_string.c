#include <string.h>
#include <stdio.h>

int main(int argc, char **argv){
    char str[] = "http://c.biancheng.net";

    str[0] = 'H';
    printf("%s\n", str); // Hello, c.biancheng.net
    
    char * str2 = "http://c.biancheng.net";
    str2[0] = 'H'; // error
    printf("%s\n", str2);

}
