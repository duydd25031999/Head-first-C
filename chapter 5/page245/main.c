#include <stdio.h>

typedef struct {
    const char *description;
    float value;
} swag;

typedef struct {
    swag *swag;
    const char *sequece;
} combination;

typedef struct {
    combination numbers;
    const char *make;
} safe;

void show(safe s) {
    combination c = s.numbers;
    swag *sw = c.swag;
    printf("Swag : %s - %f\n", sw->description, sw->value);
    printf("Combination : %s\n", c.sequece);
    printf("Safe : %s", s.make);
}

void main() {
    swag gold = {"GOLD!", 100000.0};
    combination numbers = {&gold, "6502"};
    safe s = {numbers, "RAMACON250"};
    show(s);
}
