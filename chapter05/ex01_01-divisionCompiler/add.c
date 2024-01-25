#include "add.h"

// 전역 변수 접근 -> 만약 선언이 안되어 있으면, link 타임에 에러가 발생한다.
extern int result;

int add(int a, int b) {
    result = a + b;
    return result;
}