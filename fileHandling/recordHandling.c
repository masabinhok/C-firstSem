#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s[3];
    FILE *fptr;
    
    fptr = fopen("record.txt", "wb+"); // Open file for reading and writing in binary mode
    if (fptr == NULL) {
        perror("Error opening file!");
        return 1;
    }
    
    // Input student details
    for (int i = 0; i < 3; i++) {
        printf("Enter Name, Roll, and Marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    
    // Write student details to file
    fwrite(s, sizeof(struct student), 3, fptr);
    
    // Rewind the file pointer to the beginning of the file
    rewind(fptr);
    
    // Read student details from file
    fread(s, sizeof(struct student), 3, fptr);
    
    // Display student details
    printf("Reading information from file:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\t Roll: %d\t Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    
    fclose(fptr);
    return 0;
}
