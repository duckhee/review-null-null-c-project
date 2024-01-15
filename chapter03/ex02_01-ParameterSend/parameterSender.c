#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // compiler 에서 stack size 를 변경을 해주지 않으면, 1MB 이다.
    // 지역 변수는 자동 변수이므로 stack 에 저장이 된다.
    char szBuffer[1024 * 1024] = {0};
    strcpy(szBuffer, "Hello World");
    printf("buffer : %s\r\n", szBuffer);

    // int x = 3, y = 4;
    // printf("%d\r\n", add(x, y));

    // swap(&x, &y);
    // printf("x : %d, y : %d\r\n", x, y);



    return 0;
}