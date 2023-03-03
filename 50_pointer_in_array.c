#include <stdio.h>
int main() {
   int arr[5] = {10, 20, 30,40,50};
   int *ptr;     
   
   ptr = arr;   
   
   for (int i = 0; i < 3; i++) {
      printf("%u\n",i, &arr[i]);
      printf("%u\n",i, ptr + i);
      printf("%u\n",i, arr[i]);
      printf("%u\n",i, *(ptr + i));
   }
   
   return 0;
}
