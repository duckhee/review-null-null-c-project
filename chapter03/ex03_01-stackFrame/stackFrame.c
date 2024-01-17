#include <stdio.h>

// 첫번째 스코프
int main() {
    int a = 3, b = 4;
    // 선언 및 초기화
    int aData[5] = {0x10, 0x20, 0x30, 0x40, 0x50};

    printf("a : %d\r\n", a);
    // 두번째 스코프
    if (a > 2) {
        int a = 5;
        printf("a : %d\r\n", a);
    }
    return 0;
}