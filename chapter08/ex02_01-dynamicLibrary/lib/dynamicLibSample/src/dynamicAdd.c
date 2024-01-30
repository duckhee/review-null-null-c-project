#include <stdio.h>
#include "dynamicAdd.h"

// window 개발 환경에서 os에게 해당 dll 에 대한 함수를 알려주는 것
//__declspec(dllexport) int add_in_dll(int, int);


int add_in_dll(int a, int b) {
    puts("add_in_dll V2.0");
    return a + b;
}