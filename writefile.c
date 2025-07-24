#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write to file: ");
    fgets(data, sizeof(data), stdin);
    fputs(data, fp);
    fclose(fp);

    printf("Data written successfully.\n");

    return 0;
}