#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int* arr = (int*) malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
