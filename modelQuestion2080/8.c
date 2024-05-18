/*
A nested structure in C is a struct that contains another struct as a memeber. It is used to: 
1. Organie and group related data logically
2. Enhance code readability and maintanability.
3. Represent Hierarchical relationships within data.
4. Encapuslate complex data structures into manageable units.
*/

// WAP to read and store campus details such as name, address, established_year, and no_of_students in a stucture. Input data for 4 campuses. Pass the structure variable into a function and print the names of the campus which has more than 1000 students.

#include <stdio.h>

struct campus {
    char name[50];
    char address[100];
    int established_year;
    int no_of_students;
};

void printCampus(struct campus c) {
    if (c.no_of_students > 1000) {
        
        printf("Name: %s\n", c.name);
    }
}

int main() {
    int n;
    printf("Enter the number of campuses: ");
    scanf("%d", &n);

    struct campus c[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name of Campus: ");
        scanf("%s", c[i].name);
        printf("Enter address of Campus: ");
        scanf("%s", c[i].address);
        printf("Enter established year: ");
        scanf("%d", &c[i].established_year); 
        printf("Enter no of students: ");
        scanf("%d", &c[i].no_of_students); 
    }
printf("Campus with more than 1000 students:\n");
    for (int i = 0; i < n; i++) {
        printCampus(c[i]);
    }
    
    return 0;
}
