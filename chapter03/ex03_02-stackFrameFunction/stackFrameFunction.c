#include <stdio.h>

void print_data(int a, int b) {
    printf("%d, %d\r\n", a, b);
}

int add(int param1, int param2) {
    int a = param1;
    int b = param2;
    print_data(a, b);
    return a + b;
}

int main() {
    add(3, 4);
    return 0;
}
