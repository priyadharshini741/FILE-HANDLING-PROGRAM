#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // Open file in append mode
    fp = fopen("example.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(data, sizeof(data), stdin);
    fputs(data, fp);
    fclose(fp);

    printf("Data appended successfully.\n");

    return 0;
}