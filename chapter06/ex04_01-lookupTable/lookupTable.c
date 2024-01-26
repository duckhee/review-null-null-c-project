#include <stdio.h>

typedef struct _MyParams {
    int param1;
    int param2;
    int param3;
} MY_PARAMS;

// 함수 포인터의 배열
int (*g_op_list[5])(MY_PARAMS *);

int add(MY_PARAMS *pParam) {
    return 0;
}

int sub(MY_PARAMS *pParam) {
    return 0;
}

int multi(MY_PARAMS *pParam) {
    return 0;
}

int div(MY_PARAMS *pParam) {
    return 0;
}

// 함수 포인터 초기화
void init_op_list() {
    g_op_list[1] = add;
    g_op_list[2] = sub;
    g_op_list[3] = multi;
    g_op_list[4] = div;
}

int main() {
    init_op_list();
    int instructions[1024] = {0};
    int pc = 0;
    MY_PARAMS param = {0};
    while (instructions[pc]) {
/**
        switch (instructions[pc]) {
            case 1: // add
                break;
            case 2: // sub
                break;
            case 3: // multi
                break;
            case 4: // div
                break;
        }
*/
        // look up table 형태로 함수 포인터 호출 하는 것
        g_op_list[instructions[pc]](&param);
        pc++;
    }
    return 0;
}