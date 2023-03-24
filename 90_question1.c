#include <stdio.h>

int main() {
    int term = 1;
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d,", term);
        if (i % 2 == 1) {
            term = term + i + 1;
        } else {
            term = term - i - 1;
        }
    }
    return 0;
}
