#include <stdio.h>

#ifdef WIN32
__declspec(naked) void overTests(void){
    puts("Stack Overrune!");
}
#endif


void targetFunction(int param) {
    puts("TargetFunction - call");
    int local = 10;
    // 지역 변수에 함수를 넣어 버리는 것
//    *(&local + 2) = (int) overTest;
    puts("TargetFunction - end");
}

int main() {
    puts("begin");
    targetFunction(1);
    puts("end");
    return 0;
}