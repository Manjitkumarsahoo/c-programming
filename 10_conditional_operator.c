#include <stdio.h>

int main()
 {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Using the conditional operator to check if the number is positive or negative
    (num >= 0) ? printf("%d is a positive number\n", num) :
     printf("%d is a negative number\n", num);

    return 0;
}
