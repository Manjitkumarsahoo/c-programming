#include <stdio.h>

int main() {
    int a = 15, b = 25, c = 30;

    // AND operator
    if (a > b && a > c) {
        printf("a is the largest number\n");
    } else {
        printf("a is not the largest number\n");
    }

    // OR operator
    if (a == b || a == c) {
        printf("a is equal to either b or c\n");
    } else {
        printf("a is not equal to either b or c\n");
    }

    // NOT operator
    if (!(a == b)) {
        printf("a is not equal to b\n");
    } else {
        printf("a is equal to b\n");
    }

    return 0;
}
