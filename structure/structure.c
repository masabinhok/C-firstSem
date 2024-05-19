#include <stdio.h>
#include<string.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct student s;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    // Remove the newline character left by fgets
    s.name[strcspn(s.name, "\n")] = 0;

    printf("Enter roll and marks: ");
    scanf("%d %f", &s.roll, &s.marks);

    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
