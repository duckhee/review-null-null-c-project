#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <process.h>
#include <conio.h>

// 동기화 진행 시 Thread의 흐름을 제어해주기 위한 객체이다.
CRITICAL_SECTION g_cs;

/**
 * 세개의 thread가 동시에 접근이 가능한 부분으로써 위험 구간으로 말할 수 있다.
 * 위험 구간은 대부분의 경우 변수 그리고 그 변수가 포인터일 때는 가리키는 대상을 중심으로 설정된다.
 * */
char *g_pszMsg = 0;

void thread_set(void *pParam) {
    while (1) {
        // 임계 구간에 대한 Lock
        EnterCriticalSection(&g_cs);
        if (g_pszMsg == 0) {
            g_pszMsg = (char *) malloc(sizeof(64));
            strcpy_s(g_pszMsg, 64, "Hello");
        }
        // Thread 상태가 suspend 상태로 변경되는 함수
        // 1ms 만큼 대기 했다가 다시 resume 된다.
//        Sleep(1);
    // 임계 구간에 대한 UnLock
        LeaveCriticalSection(&g_cs);
    }
}

void thread_reset(void *pParam) {
    while (1) {
        // 임계 구간에 대한 Lock
        EnterCriticalSection(&g_cs);
        if (g_pszMsg != 0) {
            free(g_pszMsg);
            g_pszMsg = 0;
        }
//        Sleep(1);
        // 임계 구간에 대한 UnLock
        LeaveCriticalSection(&g_cs);
    }
}


int main() {
    // Thread 동기화 제어 흐름을 하기 위한 함수 호출
    InitializeCriticalSection(&g_cs);
    _beginthread(thread_set, 0, 0);
    _beginthread(thread_reset, 0, 0);

    while (_getchar() != 'q') {

        if (g_pszMsg != 0) {
            puts(g_pszMsg);
        } else {
            puts("Empty");
        }

    }
    // 흐름 제어를 위해 사용한 객체에 대한 종료
    DeleteCriticalsSection(&g_cs);
    return 0;
}