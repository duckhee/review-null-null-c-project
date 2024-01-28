#include <stdio.h>
#include <windows.h>
#include <process.h>


int g_nData;

void thread_main(void *pParam) {
    g_nData = 0;
    puts("begin - new thread");
    for (int i = 0; i < 100; ++i) {
        g_nData += 1;
    }
    puts("end - new thread");
    return;
}


int main(int argc, char **argv) {
    int nData = 0;
    puts("begin - main");
    // Thread를 생성하는데 많은 CPU 연산이 필요하다.
    _beginthread(thread_main, 0, 0);

    for (int i = 0; i < 200; ++i) {
        nData += 1;
    }
    printf("g_nData : %d\r\n", g_nData);
    // 여기서 Thread 가 종료될 때 까지 기다려 주지 않으면, 정상 동작을 하지 않는다.
    puts("begin - end");

    return 0;
}