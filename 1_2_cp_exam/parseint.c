#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char string[] = "1 + 2";
    int nums[2];
    char* temp = strtok(string, " +");

    int i = 0;
    while (temp != NULL) {
        nums[i++] = atoi(temp);
        temp = strtok(NULL, " +");
    }

    printf("%d", nums[0] + nums[1]);
    return 0;
}