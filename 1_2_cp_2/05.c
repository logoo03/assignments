/* 05 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void convert(double *grades, double *scores, int size);

int main() {
    double scores[SIZE];
    double grades[SIZE] = { 0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3 };
    convert(grades, scores, SIZE);
    
    for (int i = 0; i < SIZE; i++) {
        printf("%05.2f ", grades[i]);
    }
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%05.2f ", scores[i]);
    }
    return 0;
}

void convert(double *grades, double *scores, int size) {
    for (int i = 0; i < size; i++) {
        *(scores + i) = (*(grades + i)) * 100 / 4.3;
    }
}