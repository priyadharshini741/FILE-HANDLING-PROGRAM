#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // Open file in read mode
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("File content:\n");
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }

    fclose(fp);

    return 0;
}