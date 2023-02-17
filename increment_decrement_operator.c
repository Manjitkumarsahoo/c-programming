#include <stdio.h>

int main() {
    int x = 20;
    printf("Value of x: %d\n", x);

    x++;  
    printf("Value of x is: %d\n", x);

    x--; 
    printf("Value of x is: %d\n", x);

    int y = 30;
    printf("Value of y: %d\n", y);

    ++y; 
    int z = x + y;
    printf("Value of z is: %d\n", z);

    z = x + y++; 
    printf("Value of is: %d\n", z);
    printf("Value of y is: %d\n", y);

    z = x + ++y; 
    printf("Value of z is: %d\n", z);
    printf("Value of y is: %d\n", y);

    return 0;
}
