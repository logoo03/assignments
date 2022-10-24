/* 01 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x = 0x12345678;
    unsigned char *xp = (char*)&x;

    printf("바이트 순서: %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);
    /* 12 34 56 78: 빅 엔디언
    ** 87 65 43 21: 리틀 엔디언
    */
    return 0;
}