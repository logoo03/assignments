#include <stdio.h>

int main() {
    int buffer1[1024], buffer2[1024];
    char fdir1[100], fdir2[100];
    FILE *f1, *f2;

    printf("file1 directory: ");
    scanf("%s", fdir1);
    printf("file2 directory: ");
    scanf("%s", fdir2);

    if ((f1 = fopen(fdir1, "rb")) == NULL) {
        printf("Error.\n");
        return 1;
    }
    fread(buffer1, sizeof(int), 100, f1);

    if ((f2 = fopen(fdir2, "rb")) == NULL) {
        printf("Error.\n");
        return 1;
    }
    fread(buffer2, sizeof(int), 100, f2);

    for (int i = 0; i < 1024; i++) {
        if (buffer1[i] == '\0' && buffer2[i] == '\0') break;
        if (buffer1[i] != buffer2[i]) {
            printf("The files are different.\n");
            return 0;
        }
    }
    printf("The files are the same.\n");

    return 0;
}