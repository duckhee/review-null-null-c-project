#include <stdio.h>
#include <stdio.h>

int main() {
    FILE *fp = NULL;
    // 파일을 바이너리 모드로 쓰기로 열기
    fp = fopen("test.dat", "wb");
    // 파일이 열리지 않았을 경우 종료
    if (fp == NULL) {
        printf("file open error\r\n");
        return -1;
    }
    // 파일에 값을 쓰는 함수이다.
    /**
     * size_t fwrite(const void *buffer, size_t size, size_t nItems, FILE *stream);
     * => 스트림에 데이터 블록을 쓴다. 스트림에 count 개의 원소를 가지는 배열을 쓴다. 각각의 원소는 size 바이트이고, 그 배열은 ptr 이 가리키는 것이다.
     * => 전체 스트림에 써지는 바이트 수는 size * count 가 된다. 전체 스트림에 써지는 바이트 수 만큼 위치 지정자가 증가하게 된다.
     * * const void *buffer
     * => 파일에 쓰기 위한 값
     * * size_t size
     * => 쓰기 위한 값의 자료형의 크기
     * * size_t nItems
     * => 파일에 쓰기 위한 값의 갯수
     * * FILE *stream
     * => 해당 값을 쓸 파일에 대한 파일 포인터
     */
    fwrite("\x00\x11\x22\x33", 4, 1, fp);
    fwrite("\x44\x55\x66\x77", 4, 1, fp);
    fwrite("\x88\x99\xAA\xBB", 4, 1, fp);
    fwrite("ABCD", 4, 1, fp);

    fclose(fp);
    return 0;
}