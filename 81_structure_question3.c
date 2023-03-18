#include <stdio.h>
#include<stdlib.h>

struct rectangle {
    int length;
    int width;
};

int main() {
    struct rectangle r;

    printf("Enter length and width of rectangle:\n");
    scanf("%d %d", &r.length, &r.width);

    int area = r.length * r.width;
    int perimeter = 2 * (r.length + r.width);

    printf("Area of the rectangle is %d\n", area);
    printf("Perimeter of the rectangle is %d\n", perimeter);

    return 0;
}
