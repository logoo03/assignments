/* 06 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int array[3][5] = { { 12, 56, 32, 16, 98 }, { 99, 56, 34, 41, 3 }, { 65, 3, 87, 78, 21 } };
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
            sum += array[i][j];
        printf("%d행의 합계: %d\n", i, sum);
    }
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
            sum += array[j][i];
        printf("%d열의 합계: %d\n", i, sum);
    }
    return 0;
}