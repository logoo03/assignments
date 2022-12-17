/* 02 */
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

    size_t bytes_read;
    while ((bytes_read = fread(buffer, 1, BUFSIZ, fs)) > 0) {
        fwrite(buffer, 1, bytes_read, fd);
    }

    fclose(fs);
    fclose(fd);

    return 0;
}