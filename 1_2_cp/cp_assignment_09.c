/* 09 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[5][3];
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = rand() % 101;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int max_score = 0;
        int min_score = 101;
        for (int j = 0; j < 5; j++)
        {
            if (max_score < array[j][i]) {
                max_score = array[j][i];
            }
            if (min_score > array[j][i]) {
                min_score = array[j][i];
            }
        }
        printf("시험 #%d의 최대점수=%d\n", i, max_score);
        printf("시험 #%d의 최저점수=%d\n", i, min_score);
    }
    
    return 0;
}