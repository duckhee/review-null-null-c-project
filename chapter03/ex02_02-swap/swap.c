#include <stdio.h>

#define ADD(x, y)     ((x) + (y))

int add(int a, int b) {
    return a + b;
}

void swap(int *pA, int *pB) {
    // pointer 변수가 가르키는 value 를 가져오기
    int nTemp = *pA;
    *pA = *pB;
    *pB = nTemp;
}

// c++ style의 swap 함수
// & 는 c++ 에서는 참조 선언이다. -> int 형의 자료형에 대한 참조 선언이다.
// 참조자로 불리며, 간접 지정을 하지 않고 접근이 가능하다.
// call by address 와 call by reference 는 기계어로 변역해서 보면 큰 차이가 없다.
/**
void cxxSwap(int& a, int &b){
    // 여기서 실체와 똑같이 처리가 되므로 간접 지정 개념이 없이 동작이 가능하다.
    int nTemp = a;

    a = b;
    b = nTemp;
}
*/

int main() {
    int x = 3, y = 4;
    printf("x = %d, y = %d\r\n", x, y);
    // lea 어셈블리 명령어는 해당 값을 불러오는 명령어이다.
    swap(&x, &y);

    printf("x = %d, y = %d\r\n", x, y);
    printf("define add result : %d\r\n", ADD(x, y));
    return 0;
}