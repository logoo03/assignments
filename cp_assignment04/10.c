#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *fs, *fd;
    char buffer[BUFSIZ];

    if ((fs = fopen("input.txt", "r")) == NULL) {
        fprintf(stderr, "Error while opening src file.\n");
        return 1;
    }

    if ((fd = fopen("output.txt", "w")) == NULL) {
        fprintf(stderr, "Error while opening dst file.\n");
        return 1;
    }

    int line_number = 1;

    char line[256];

    while (fgets(line, sizeof(line), fs) != NULL) {
        fprintf(fd, "%d: %s", line_number++, line);
    }

    fclose(fs);
    fclose(fd);

    return 0;
}