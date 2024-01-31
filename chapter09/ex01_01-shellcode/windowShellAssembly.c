#include <Windows.h>

void main(void) {

    __asm
    {
            push    ebp
            mov        ebp, esp
            sub        esp, 48h
            mov        byte ptr[ebp - 0Ch], 63h
            mov        byte ptr[ebp - 0Bh], 61h
            mov        byte ptr[ebp - 0Ah], 6Ch
            mov        byte ptr[ebp - 9], 63h
            mov        byte ptr[ebp - 8], 0
            push    1
            lea        eax,[ebp - 0Ch]
            push    eax
            mov        eax, WinExec
            call    eax
            push    1
            mov        eax, exit
            call    eax
    }
}
