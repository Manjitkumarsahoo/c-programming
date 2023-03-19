#include <stdio.h>
#include <string.h>

int palindrome(char* str, int start, int end) {
   if (start >= end) {
      return 1;
   } else if (str[start] != str[end]) {
      return 0;
   } else {
      return palindrome(str, start+1, end-1);
   }
}

int main() {
   char str[100];
   printf("Enter a string: ");
   scanf("%s", str);
   int len = strlen(str);
   int result = palindrome(str, 0, len-1);
   if (result) {
      printf("%s is a palindrome", str);
   } else {
      printf("%s is not a palindrome", str);
   }
   return 0;
}
