#include <stdio.h>
#include <Windows.h>

// shell code 를 기계어로 번역 해둔 것
char shellcode1[] = "\x55\x8B\xEC\x83\xEC\x48"
                    "\xC6\x45\xF4\x63\xC6\x45\xF5\x61\xC6"
                    "\x45\xF6\x6C\xC6\x45\xF7\x63\xC6\x45"
                    "\xF8\x00\x6A\x01\x8D\x45\xF4\x50\xA1"
                    "\x00\x70\x41\x00\xFF\xD0\x6A\x01\xA1"
                    "\xC0\x70\x41\x00\xFF\xD0";

char shellcode2[] = "\x55\x8B\xEC\x83\xEC\x48"
                    "\xC6\x45\xF4\x63\xC6\x45\xF5\x61\xC6"
                    "\x45\xF6\x6C\xC6\x45\xF7\x63\xC6\x45"
                    "\xF8\x00\x6A\x01\x8D\x45\xF4\x50\xA1"
                    "\x20\x70\x41\x00\xFF\xD0\x6A\x01\xA1"
                    "\x78\x70\x41\x00\xFF\xD0";


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