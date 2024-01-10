#include <stdio.h>

int main(void) {
    // 문자열 선언 => 문자열 상수이므로, const char []로 선언이 되었다.
    char *pszParam = "Hello World\n";
    printf(pszParam);
    // 현재 메모리 주소는 위에 선언된 pszParam의 위치랑 같다. => 상수의 값이 같으면, compiler가 최적화를 진행을 하면서 같은 메모리를 공유하게 된다.
    printf("Hello World\r\n");
    // 문자열에 대한 상수 값 변경 => over write
    pszParam = "nullnull != null";
    printf(pszParam);
    return 0;
}