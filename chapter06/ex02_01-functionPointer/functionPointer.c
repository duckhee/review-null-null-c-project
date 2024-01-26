#include <stdio.h>

int add(int a, int b);

int main() {
    int result = 0;
    result = add(3, 4);
    printf("result : %d\r\n", result);
    // function pointer
    // 최적화 시에 포인터의 주소를 찾아가서 참조해서 함수를 콜하는 형태로 된다. => 약간의 over head가 발생한다.
    int (*pf)(int, int);
    pf = add;
    printf("pointer result : %d\r\n", pf(3, 4));
    return 0;
}

int add(int a, int b) {
    int result = a + b;
    return result;
}