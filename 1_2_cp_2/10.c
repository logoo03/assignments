/* 10 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd);

int main() {
    printf("두 개의 정수를 입력하시오: ");
    int a, b, lcm, gcd;
    scanf("%d %d", &a, &b);
    get_lcm_gcd(a, b, &lcm, &gcd);
    printf("최소공배수는 %d입니다.\n", lcm);
    printf("최대공약수는 %d입니다.\n", gcd);

    return 0;
}

void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd) {
    int mult = x * y;
    while (y > 0) {
        int temp = x;
        x = y;
        y = temp % y;
    }
    *p_gcd = x;
    *p_lcm = mult / *p_gcd;
}