#include <stdio.h>
#include "add.h"

int result = 5;

// static 은 이 파일 내에서만 전역 변수라고 선언하는 것과 같다.
static int mainResult = 1;

int main() {
    add(3, 4);
    printf("result = %d\r\n", result);
    return 0;
}