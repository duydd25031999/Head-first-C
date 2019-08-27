#include <stdio.h>

typedef struct
{
    const char *name;
    const char *species;
    int age;
} turtle;

void happy_birthday_1(turtle *t) {
    (*t).age = (*t).age + 1;
    printf("Happy birthday %s! You are now %i years old!\n", (*t).name, (*t).age);
}

void happy_birthday_2(turtle *t) {
    t->age = t->age + 1;
    printf("Happy birthday %s! You are now %i years old!\n", t->name, t->age);
}

void main() {
    turtle t = {"My Turtle", "Leatherback sea turtle", 99};
    happy_birthday_1(&t);
    happy_birthday_2(&t);
    printf("%s are now %i years old!\n", t.name, t.age);
}