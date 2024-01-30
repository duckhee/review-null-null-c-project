#include <stdio.h>
#include "dynamicAdd.h"

// window에서 동적 라이브러리에서 가져왔다는 키워드
//__declspec(dllimport) int add_in_dll(int, int);
//#pragma comment(lib, "라이브러리 경로")

int main() {
    add_in_dll(3, 4);
    return 0;
}