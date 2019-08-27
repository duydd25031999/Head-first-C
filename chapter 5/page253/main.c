#include <stdio.h>

typedef union {
    float lemon;
    int lime_option;
} lemon_lime;

typedef struct {
    float tequila;
    float cointreau;
    lemon_lime circus;
} margarita;

void show1(margarita m) {
    printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n\n", m.tequila, m.cointreau, m.circus.lemon);
}

void show2(margarita m) {
    printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%i pieces of lime\n\n", m.tequila, m.cointreau, m.circus.lime_option);
}

void main() {
    margarita m1 = {2.0, 1.0, {2}};
    margarita m2 = {2.0, 1.0, {0.5}};
    margarita m3 = {2.0, 1.0, {.lime_option = 1}};

    show1(m1);
    show1(m2);
    show2(m3);
}