#include <stdio.h>

int gcd(int a, int b) {
   if (a == 0) {
      return b;
   } else {
      return gcd(b % a, a);
   }
}

int main() {
   int num1, num2;
   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);
   int result = gcd(num1, num2);
   printf("GCD of %d and %d is %d", num1, num2, result);
   return 0;
}
