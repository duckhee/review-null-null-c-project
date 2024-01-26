#include <stdio.h>
#include <stdlib.h>

// 가장 빠른 정렬 알고리즘 => quick sort
/**
 * 첫번째 인자로 정렬할 배열이 매개변수로 온다.
 * 두번째 인자는 해당 배열의 갯수에 대한 값을 준다.
 * 세번째 인자는 배열의 자료형의 크기에 대한 값
 * 네번째 인자는 비교하는 방법에 대한 함수 포인터를 넣어준다.
*/
//void qsort(void *base, size_t number, size_t width, int(__cdecl *compare)(const void *, const void *));

// 정렬을 하기 위한 비교 방법론
int compare(const void *left, const void *right) {
    // void pointer 를 지정 가능한 형태로 형 변환 하는 것
    return *(int *) left - *(int *) right;
//    return *(int *) right - *(int *) left;
}

int main() {
    int aData[5] = {4, 2, 5, 1, 3};
    qsort(aData, 5, sizeof(int), compare);
    for (int i = 0; i < (sizeof(aData) / sizeof(int)); i++) {
        printf("%d ", aData[i]);
    }
    printf("\r\n");
    return 0;
}