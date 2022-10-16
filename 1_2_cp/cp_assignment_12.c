/* 12 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void scalar_mult(int a[][3], int scalar);
void transpose(int a[][3], int b[][3]);

int main() {
    int sample_array[3][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 },
    };
    int function_code, scalar_const;
    int another_sample_array[3][3];
    printf("실행할 함수를 입력 (1: scalar_mult, 2: transpose): ");
    scanf("%d", &function_code);
    switch (function_code)
    {
    case 1:
        printf("스칼라 곱셈 상수 입력: ");
        scanf("%d", &scalar_const);
        scalar_mult(sample_array, scalar_const);
        break;
    
    case 2:
        transpose(sample_array, another_sample_array);
        break;

    default:
        printf("잘못된 코드\n");
        break;
    }
    return 0;
}

void scalar_mult(int a[][3], int scalar) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j] * scalar);
        }
        printf("\n");
    }
}

void transpose(int a[][3], int b[][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}