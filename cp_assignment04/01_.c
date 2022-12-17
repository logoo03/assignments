#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2;
    char fdir1[100], fdir2[100];
    char *contents1, *contents2;

    printf("file1 directory: ");
    scanf("%s", fdir1);
    printf("file2 directory: ");
    scanf("%s", fdir2);

    if ((f1 = fopen(fdir1, "rb")) == NULL) {
        fprintf(stderr, "Error while opening a file.\n");
        return 1;
    }
    if ((f2 = fopen(fdir2, "rb")) == NULL) {
        fprintf(stderr, "Error while opening a file.\n");
        return 1;
    }

    fseek(f1, 0, SEEK_END);
    long fsize1 = ftell(f1);
    rewind(f1); // fseek(f1, 0, SEEK_SET);
    contents1 = (char *) malloc(fsize1 + 1);
    fread(contents1, fsize1, 1, f1);
    fclose(f1);

    fseek(f2, 0, SEEK_END);
    long fsize2 = ftell(f2);
    rewind(f2); //fseek(f2, 0, SEEK_SET);
    contents2 = (char *) malloc(fsize2 + 1);
    fread(contents2, fsize2, 1, f2);
    fclose(f2);

    if (!strcmp(contents1, contents2)) printf("file1 and file2 are the same.\n");
    else printf("file1 and file2 are different.\n");

    free(contents1);
    free(contents2);

    return 0;
}
