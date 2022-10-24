/* 12 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_int(int *px, int *py);

int main() {
    int a, b;
    printf("2개의 정수를 입력하시오(예: 10 20):");
    scanf("%d %d", &a, &b);
    get_int(&a, &b);

    return 0;
}

void get_int(int *px, int *py) {
    printf("정수의 합은 %d\n", *px + *py);
}