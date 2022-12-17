#include <stdio.h>

struct Grade {
    char name[10];
    int score_kr;
    int score_math;
    int score_eng;
};

int main() {
    FILE *fs;

    if ((fs = fopen("formatted_input.txt", "r")) == NULL) {
        fprintf(stderr, "Error while opening src file.\n");
        return 1;
    }

    struct Grade data[100];

    /* Cut off the first line */
    char dump[30];
    fscanf(fs, "%s %s %s %s\n", dump, dump, dump, dump);

    int count = 0;
    while (!feof(fs)) {
        struct Grade *d = &data[count];
        fscanf(fs, "%s %d %d %d\n",
            d->name, &(d->score_kr), &(d->score_math), &(d->score_eng));
        count++;
    }

    fclose(fs);

    if ((fs = fopen("formatted_output.txt", "w")) == NULL) {
        fprintf(stderr, "Error while opening dst file.\n");
        return 1;
    }

    fprintf(fs, "이름 평균\n");
    for (int i = 0; i < count; i++) {
        struct Grade *d = &data[i];
        double avg = (d->score_eng + d->score_kr + d->score_math) / 3;
        fprintf(fs, "%s %.2f\n", d->name, avg);
    }

    fclose(fs);

    return 0;
}