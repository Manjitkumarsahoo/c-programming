#include <stdio.h>
#include<stdlib.h>

struct student {
    char name[50];
    int rollno;
    int maths;
    int science;
    int english;
    int total;
};
int main() {
    struct student s[3];
    int i;

    for(i=0; i<3; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll number: ");
        scanf("%d", &s[i].rollno);
        printf("Marks in Maths: ");
        scanf("%d", &s[i].maths);
        printf("Marks in Science: ");
        scanf("%d", &s[i].science);
        printf("Marks in English: ");
        scanf("%d", &s[i].english);

        s[i].total = s[i].maths + s[i].science + s[i].english;
    }

    printf("Details of all students:\n");
    for(i=0; i<3; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].rollno);
        printf("Marks in Maths: %d\n", s[i].maths);
        printf("Marks in Science: %d\n", s[i].science);
        printf("Marks in English: %d\n", s[i].english);
        printf("Total marks: %d\n", s[i].total);
    }

    return 0;
}
