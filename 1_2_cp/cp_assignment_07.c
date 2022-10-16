/* 07 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int array[3][10];
    for (int i = 0; i < 10; i++)
    {
        array[0][i] = i + 1;
        array[1][i] = (i + 1) * (i + 1);
        array[2][i] = array[1][i] * (i + 1);
    }
    printf("정수를 입력하시오: ");
    int input;
    scanf("%d", &input);
    for (int i = 0; i < 10; i++)
    {
        if (array[2][i] == input)
        {
            printf("%d의 세제곱근은 %d\n", input, array[0][i]);
            return 0;
        }
    }
    printf("입력한 값의 세제곱근은 1 부터 10 사이의 정수가 아님\n");
    return 0;
}