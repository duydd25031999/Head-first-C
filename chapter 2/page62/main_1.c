#include <stdio.h>

void skip(char *msg) {
    puts(msg + 6);
}

void main() {
    char *msg_from_array = "Don't call me";
    skip(msg_from_array);
}