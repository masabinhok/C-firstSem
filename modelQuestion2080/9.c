//WAP to read any string and write it in a file. Read the contents from the file and seperate the uppercase and lowercase letters into two different files.
#include <stdio.h>

int main() {
    char string[100];

    // User sanga input maagne
    printf("Enter any string: ");
    fgets(string, sizeof(string), stdin);

  // file ma write gar
    FILE *file = fopen("original.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    fprintf(file, "%s", string);
    fclose(file);

    // file bata data read gar
    file = fopen("original.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // duita seperate file kholne
    FILE *upperfile = fopen("uppercase.txt", "w");
    FILE *lowerfile = fopen("lowercase.txt", "w");
    if (upperfile == NULL || lowerfile == NULL) {
        perror("Error opening file");
        return 1;
    }

    int c;
    while ((c = fgetc(file)) != EOF) {
        if (c >= 'A' && c <= 'Z')
            fputc(c, upperfile);
        else if (c >= 'a' && c <= 'z')
            fputc(c, lowerfile);
    }

    // file close garne
    fclose(file);
    fclose(upperfile);
    fclose(lowerfile);

    printf("File Closed\n");

    // print messages.
    printf("Uppercase letters saved in uppercase.txt\n");
    printf("Lowercase letters saved in lowercase.txt\n");

    return 0;
}
