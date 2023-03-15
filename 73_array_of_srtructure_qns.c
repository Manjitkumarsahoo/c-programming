//write a c program to store the information of 5 student by using array of structures .the structure has three member :name (string),roll(integer)and mark(float)
#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int roll;
    float mark;
};

int main() {
    struct student s[5];
    int i;

    // Input student details
    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Mark: ");
        scanf("%f", &s[i].mark);
    }

    // Print student details
    printf("\nDetails of all students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].roll);
        printf("Mark: %.2f\n", s[i].mark);
    }

    return 0;
}
