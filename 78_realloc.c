#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 5;
    
    int* arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    printf("Array elements before resizing:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int new_size = 10;
    arr = (int*) realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    for (int i = n; i < new_size; i++) {
        arr[i] = i + 1;
    }
    
    printf("Array elements after resizing:\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
     
    return 0;
}
