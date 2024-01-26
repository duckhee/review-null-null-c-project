#include <stdio.h>

// inline 함수를 만드는 키워드
int __inline add(int a, int b) {
    int result = a + b;
    return result;
}


int main() {
    int input;
    scanf("%d", &input);
    // RunTime에 결정이 되므로 최적화 대상이 아니다 => 사용자 입력을 받아서 할당 하므로
    int result = 0;
    result = add(3, input);
    printf("Result : %d\r\n", result);

    result = add(4, input);
    printf("Result : %d\r\n", result);
    return 0;
}