#include <stdio.h>
#include<stdlib.h>

struct book {
    char title[50];
    char author[50];
    int year;
    float price;
};

int main() {
    struct book books[2];

    for (int i = 0; i < 2; i++) {
        printf("Enter title, author, year, and price of book %d:\n", i + 1);
        scanf("%s %s %d %f", books[i].title, books[i].author, &books[i].year, &books[i].price);
    }

    for (int i = 0; i < 2; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}
