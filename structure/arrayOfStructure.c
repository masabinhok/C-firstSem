#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s[5];
    int i;

    // Input details of 5 students
    printf("Enter the details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &s[i].roll);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &s[i].marks);
    }

    // Display the details of students
    printf("\nDisplaying the information of students:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n"); // Adding a newline for better readability
    }

    return 0;
}
