#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island {
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

void display(island *start) {
    for(island *i = start; i != NULL; i = i->next) {
        printf("Name: %sopen: %s-%s\n", i->name, i->opens, i->closes);
    }
}

island* create(char *name) {
    island *i = malloc(sizeof(island));
    i->name = strdup(name);
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;
}

void release(island *start) {
    island *next = NULL;
    for(island *i = start; i != NULL; i = next) {
        next = i->next;
        free(i->next);
        free(i);
    }
}

void main() {
    island *start = NULL;
    island *i = NULL;
    island *next = NULL;

    char name[80];

    for(; fgets(name, 80, stdin) != NULL; i = next ) {

        next = create(name);

        if(start == NULL) {
            start = next;
        } 

        if(i != NULL) {
            i->next = next;
        }
    }

    display(start);
    release(start);
}