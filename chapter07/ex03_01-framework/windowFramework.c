#include <Windows.h>
#include <process.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


char g_event_queue[100];
int g_counter_rear = 0;
int g_counter_front = 0;

void add_event_copy_begin(void) {
	g_event_queue[g_counter_rear] = 'x';
	g_counter_rear++;
}
void add_event_copy_end(void) {
	g_event_queue[g_counter_rear] = 'y';
	g_counter_rear++;
}

void thread_user_event(void* pParam) {
	char event;
	puts("user input thread - begin");
	while (event = _getch()) {
		printf("user input event: %c\n", event);
		g_event_queue[g_counter_rear] = event;
		g_counter_rear++;
	}
	puts("user input thread - end");
}

void thread_file_copy(void* pParam) {
	add_event_copy_begin();
	Sleep(3000);
	add_event_copy_end();
}

void event_handler_a(void) {
	puts("EVENT A: complete");
}
void event_handler_b(void) {
	puts("EVENT B: complete");
}
void event_handler_c(void) {
	puts("EVENT C: complete");
	_beginthread(thread_file_copy, 0, 0);
}

char dispatch_event() {
	char event = g_event_queue[g_counter_front];
	if (event != 0)
		g_counter_front++;

	return event;
}

int main(void)
{
	char input = 0;
	_beginthread(thread_user_event, 0, 0);

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
		Sleep(1);
	}
	return;
}