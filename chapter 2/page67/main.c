#include <stdio.h>

void main() {
    char food[5];
    printf("Enter favorite food: ");
    fgets(food, sizeof(food), stdin);
    printf("Favorite food: %s", food);
}