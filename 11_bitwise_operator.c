#include <stdio.h>

int main() {
    int a = 10;
    int b = 6; 
    int result = a & b;
    printf("a & b = %d\n", result);
    result = a | b;

    printf("a | b = %d\n", result);

    result = a ^ b; // binary 1100

    printf("a ^ b = %d\n", result);

    result = ~a;

    printf("~a = %d\n", result);

    result = a << 1; 

    printf("a << 1 = %d\n", result);

    result = a >> 1;

    printf("a >> 1 = %d\n", result);

    return 0;
}
