#include <stdio.h>
#include <Windows.h>

// __declspect(naked) 구조적으로 간단하게 해주기 위한 것이다.
__declspect(naked)void main(){
    /** 계산기를 실행 시켜준다. */
    char buf[5];
    buf[0] = 'c';
    buf[1] = 'a';
    buf[2] = 'l';
    buf[3] = 'c';
    buf[4] = '\0';
    // window 에서 실행을 시키는 함수가 winExec 이다.
    WinExec(buf, 1);

    return 1;
}