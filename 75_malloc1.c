#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* str;
    int len;
    
    printf("Enter the length of the string: ");
    scanf("%d", &len);
    
    str = (char*) malloc((len + 1) * sizeof(char));
    
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the string: ");
    scanf("%s", str);
    
    printf("String: %s\n", str);
    
    return 0;
}
