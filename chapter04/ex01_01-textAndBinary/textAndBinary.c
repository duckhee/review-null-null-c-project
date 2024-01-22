#include <stdio.h>

int main() {

    // linux
    FILE *fp = fopen("/dev/stdout", "w");
    // window
    // FILE *fp = fopen("con", "w");
    // device file 인 console 에 쓰기 가능하다.
    fputs("Hello CON device file\r\n", fp);

    return 0;
}