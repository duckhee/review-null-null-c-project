#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>


char *g_pszMsg = 0;
pthread_mutex_t mutex;

void *thread_set(void *pParam) {
    while (1) {
        /** 동기화를 위한 임계 구간에 대한 lock */
        pthread_mutex_lock(&mutex);
        if (g_pszMsg == 0) {
            g_pszMsg = (char *) malloc(sizeof(64));
            strcpy(g_pszMsg, "Hello");
        }

//        sleep(1);
        /** 동기화 임계 구간에 대한 unlock */
        pthread_mutex_unlock(&mutex);
    }
}

void *thread_reset(void *pParam) {
    while (1) {
        /** 동기화를 위한 임계 구간에 대한 lock */
        pthread_mutex_lock(&mutex);
        if (g_pszMsg != 0) {
            free(g_pszMsg);
            g_pszMsg = 0;
        }
//        sleep(1);
        /** 동기화 임계 구간에 대한 unlock */
        pthread_mutex_unlock(&mutex);
    }
}

int main() {
    pthread_t worker0 = NULL;
    pthread_t worker1 = NULL;
    /** 동기화 시 이용할 객체 생성 */
    pthread_mutex_init(&mutex, NULL);
    /** thread 생성 */
    int workerId0 = pthread_create(&worker0, NULL, thread_set, NULL);
    int workerId1 = pthread_create(&worker1, NULL, thread_reset, NULL);
    printf("worker id : %d, %d\r\n", worker0, worker1);

    while (getchar() != 'q') {
        if (g_pszMsg != 0) {
            printf("get msg : ");
            puts(g_pszMsg);
        } else {
            puts("Empty");
        }
    }
    /** 동기화 시 사용한 객체 삭제 */
    pthread_mutex_destroy(&mutex);
    return 0;
}