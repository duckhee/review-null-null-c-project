#include <stdio.h>

int main() {
    FILE *fp = NULL;
    fp = fopen("text.txt", "wb");
    if (fp == NULL) {
        printf("File Open Failed \r\n");
        return -1;
    }

    fwrite("\x00\x11\x22\x33", 4, 1, fp);
    fwrite("\x44\x55\x66\x77", 4, 1, fp);
    fwrite("\x88\x99\xAA\xBB", 4, 1, fp);
    /**
     * int fseek(FILE* stream, long int offset, int origin);
     * 파일의 포인터의 위치를 이동 시키는 함수
     * * stream
     * => 파일에 대한 포인터를 나타낸다.
     * * offset
     * => 이동 시킬 위치에 대한 offset 값을 나타낸다.
     * * origin
     * => 처음 파일 포인터의 위치를 나타낸다.
     * ** SEEK_SET
     * => 파일의 시작 위치를 나타낸다.
     * ** SEEK_CUR
     * => 파일의 현재 위치를 나타낸다.
     * ** SEEK_END
     * => 파일의 끝 위치를 나타낸다.
     * 공간을 확보하는 데 시간이 오래걸리면, 해당 프로그램이 대기하는 시간이 길어진다.
     * */
     // 1024 * 1024 * 1024 는 1GB이다.
    fseek(fp, 1024 * 1024 * 1024 - 4, SEEK_SET);
    fwrite("ABCD", sizeof(char), 4, fp);

    fclose(fp);


    return 0;
}