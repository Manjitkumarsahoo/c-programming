#include <stdio.h>
int main() {
   int var = 10;
   int *ptr;  
   
   ptr = &var;  
   
   printf("Address of var variable: %d\n", &var  );
   printf("Address stored in ptr variable: %d\n", ptr );
   printf("Value of var variable: %d\n", var );
   printf("Value of *ptr variable: %d\n", *ptr );
   
   return 0;
}
