#include <stdio.h>

void print_data(int x, int y) {
    printf("x : %d, y : %d\r\n", x, y);
}

// 64bit 운영체제에서는 __fastcall 로 사용이 된다.

// call convention 의 __stdcall 을 이용하면, 피호추자가 stack 을 정리한다.
int __stdcall add(int x, int y) {
    int a = x, b = y;
    print_data(a, b);
    return a + b;
}

// call convention 의 기본은 호출자가 스택 정리를 하는 __cdecl 이다. -> 기본이므로 생략이 가능하다.
int __cdecl main() {
    int a = 1;
    add(3, 5);
    return 0;
}