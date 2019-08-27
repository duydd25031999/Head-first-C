#include <stdio.h>

void fortune_cookie(char msg[]) {
    printf("Message read: %s\n", msg);
}

void main() {
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
}