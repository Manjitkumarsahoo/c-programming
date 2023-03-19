#include <stdio.h>

int gcd(int a, int b) {
   if (a == 0) {
      return b;
   } else {
      return gcd(b % a, a);
   }
}

int lcm(int a, int b) {
   return (a * b) / gcd(a, b);
}

int main() {
   int num1, num2;
   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);
   int result = lcm(num1, num2);
   printf("LCM of %d and %d is %d", num1, num2, result);
   return 0;
}
