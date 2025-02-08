

#include <stdio.h>

int main() {
    FILE *file;

    // Writing to file
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    for (int i = 1; i <= 10; i++) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);

    // Reading from file
    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("Contents of output.txt:\n");
    int num;
    while (fscanf(file, "%d", &num) != EOF) {
        printf("%d\n", num);
    }
    
    fclose(file);
    return 0;
}