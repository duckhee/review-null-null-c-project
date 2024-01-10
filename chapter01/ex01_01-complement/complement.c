#include <stdio.h>

int main(int argc, char **argv) {
    // 16 진수로 값을 선언 => 변수 선언 및 초기화
    // mac M 시리즈는 Little Endian 방식이다.
    int a = 0x112233;
    // 16진수로 8자리 까지 값을 표현하는 것 없는 자리는 0으로 나타낸다.
    printf("a value : 0x%08X\r\n", a);
    printf("sub : %d\r\n", 10 - 5);
    // 5의 보수에 1을 더한 값을 더하는 형태
    printf("add : %d\r\n", 10 + (~5 + 1));
    return 0;
}