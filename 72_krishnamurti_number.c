#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int isKrishnamurthy(int n) {
    int sum = 0;
    int temp = n;
    while (temp != 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isKrishnamurthy(n)) {
        printf("%d is a Krishnamurthy number.\n", n);
    } else {
        printf("%d is not a Krishnamurthy number.\n", n);
    }
    return 0;
}
