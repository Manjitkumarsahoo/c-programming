#include <stdio.h>
#include<stdlib.h>

struct employee {
    char name[50];
    int id;
    char department[50];
    float salary;
};

int main() {
    struct employee employees[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID number, department, and salary of employee %d:\n", i + 1);
        scanf("%s %d %s %f", employees[i].name, &employees[i].id, employees[i].department, &employees[i].salary);
    }

    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID number: %d\n", employees[i].id);
        printf("Department: %s\n", employees[i].department);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
