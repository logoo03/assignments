#include <stdio.h>

#define p 2  // 첫 번째 행렬의 행 수
#define q 2  // 첫 번째 행렬의 열 수 (= 두 번째 행렬의 행 수)
#define r 3  // 두 번째 행렬의 열 수

int main(void) {
    int A[p][q] = { {8, 5}, {4, -3} };  // 첫 번째 행렬
    int B[q][r] = { {2, 3, 3}, {6, 2, 0} };  // 두 번째 행렬
    int result[p][r];  // 곱한 결과값을 저장할 행렬

    // 행렬의 곱연산
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            result[i][j] = 0;
            for (int k = 0; k < q; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // 행렬 출력하기
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}
