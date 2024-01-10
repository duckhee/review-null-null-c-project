#include <stdio.h>
#include <float.h>

int main() {
    float fData = 123.125F;
    printf("%f, %E\r\n", fData, fData);
    printf("single format MIN : %E,  MAX : %E\r\n", FLT_MIN, FLT_MAX);
    printf("double format MIN : %E, MAX : %E\r\n", DBL_MIN, DBL_MAX);
    return 0;
}