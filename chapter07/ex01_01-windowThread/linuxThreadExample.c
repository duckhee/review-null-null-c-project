#include <stdio.h>
#include <pthread.h>

int g_nData;

void thread_main(void *pParam) {
    g_nData = 0;
    puts("begin - new Thread");
    for (int i = 0; i < 100; ++i) {
        g_nData += 1;
    }
    puts("end - new Thread");

}

int main() {
    pthread_t worker = NULL;
    int nData = 0;
    int status;
    puts("begin - main");
    // linux 계열에서 thread 생성 하는 함수
    int threadId = pthread_create(&worker, NULL, (void *(*)(void *)) thread_main, NULL);
    printf("thread ID : %d\r\n", threadId);

    for (int i = 0; i < 200; ++i) {
        nData += 1;
    }
    printf("g_nData : %d\r\n", g_nData);
    // thread 가 종료할 때 까지 기다리는 함수
    pthread_join(worker, (void **) &status);
    printf("g_nData : %d\r\n", g_nData);
    puts("end - main");

    return 0;
}
