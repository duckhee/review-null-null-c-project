#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>

char g_event_queue[100];
int g_count_front = 0;
int g_count_rear = 0;

// window
//void thread_user_event(void *pParam) {
void *thread_user_event(void *pParam) {
    char event;
    puts("user input thread - begin");
    // while(event = _getch()){
    while ((event = getchar())) {
        if (event != '\n') {
            printf("user input event: %c\n", event);
            g_event_queue[g_count_rear] = event;
            g_count_rear++;
        }
    }
    puts("user input thread - end");
}


char dispatch_event() {
    char event = g_event_queue[g_count_front];
    if (event != 0) {
        g_count_front++;
    }
    return event;
}

void add_event_copy_begin() {
    g_event_queue[g_count_rear] = 'x';
    g_count_rear++;
}

void add_event_copy_end() {
    g_event_queue[g_count_rear] = 'y';
    g_count_rear++;
}

// window
// void thread_file_copy(void *pParam) {
void *thread_file_copy(void *pParam) {
    add_event_copy_begin();
    sleep(3);
    add_event_copy_end();
}

void event_handler_a() {
    puts("EVENT A: complete");
}

void event_handler_b() {
    puts("EVENT B: complete");
}

void event_handler_c() {
    pthread_t fileHandleThread = NULL;
    puts("EVENT C: complete");
    // _beginthread(thread_file_copy, 0, 0):
    pthread_create(&fileHandleThread, NULL, thread_file_copy, NULL);
//    pthread_join(&fileHandleThread, NULL);
}


int main() {
    char input = 0;
    pthread_t worker;
//    _beginthread(thread_user_event, 0, 0);
    pthread_create(&worker, NULL, thread_user_event, NULL);
    while ((input = dispatch_event()) != 'q') {
        switch (input) {
            case 'x':
                puts("File copy thread - begin");
                break;
            case 'y':
                puts("File copy thread - end");
                break;
            case 'a':
                event_handler_a();
                break;
            case 'b':
                event_handler_b();
                break;
            case 'c':
                event_handler_c();
                break;
        }
        /** cpu 점유율이 너무 높게 나오지 않기 위해서 잠시 대기하도록 하는 대기 */
        usleep(1);

    }
    return 0;
}