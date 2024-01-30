#include <stdio.h>
#include "static_add.h"

#pragma comment(lib, "../lib/staticLibSample/buildDIr/libAdd.a")
int add_in_lib(int, int);

int add(int a, int b) {
    puts("add_in_exe");
    return a + b;
}

int main() {
    int result = add_in_lib(5, 3);
    add(5, 3);
    printf("result : %d\r\n", result);
    return 0;
}