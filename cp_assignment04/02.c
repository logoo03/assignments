#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char fdir1[100], fdir2[100];
    char *contents;
    char buffer[BUFSIZ];

    printf("src directory: ");
    scanf("%s", fdir1);
    printf("dst directory: ");
    scanf("%s", fdir2);

    FILE *fs, *fd;

    if ((fs = fopen(fdir1, "r")) == NULL) {
        fprintf(stderr, "Error while opening src file.\n");
        return 1;
    }

    if ((fd = fopen(fdir2, "w")) == NULL) {
        fprintf(stderr, "Error while opening dst file.\n");
        return 1;
    }

    while (fgets(buffer, 100, fs) != NULL) {
        fputs(buffer, fd);
    }

    fclose(fs);
    fclose(fd);

    return 0;
}