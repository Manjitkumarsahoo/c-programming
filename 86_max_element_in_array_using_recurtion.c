#include <stdio.h>

int find_max(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    else {
        int max = find_max(arr, n-1);
        if (arr[n-1] > max) {
            return arr[n-1];
        }
        else {
            return max;
        }
    }
}

int main() {
    int arr[] = {3, 6, 2, 8, 4, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_element = find_max(arr, n);
    printf("The maximum element in the array is: %d", max_element);
    return 0;
}
