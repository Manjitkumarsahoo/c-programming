#include <stdio.h>

int main() {
    int x = 25;  // Assigning the value 5 to variable x
    printf("Value of x: %d\n", x);

    x += 3;  // Adding 3 to x and assigning the result to x
    printf("Value of x after adding 3: %d\n", x);

    x -= 2;  // Subtracting 2 from x and assigning the result to x
    printf("Value of x after subtracting 2: %d\n", x);

    x *= 4;  // Multiplying x by 4 and assigning the result to x
    printf("Value of x after multiplying by 4: %d\n", x);

    x /= 2;  // Dividing x by 2 and assigning the result to x
    printf("Value of x after dividing by 2: %d\n", x);

    int y = 35;  // Assigning the value 10 to variable y
    int z = x + y;  // Adding x and y and assigning the result to variable z
    printf("Value of z: %d\n", z);

    return 0;
}
