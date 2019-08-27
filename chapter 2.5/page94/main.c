#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my hearst in Harvard Med School",
    "Mewark, Mewark - a wonderful town",
    "Dancing witk a Dork",
    "From here to maternity",
    "The girl from Iwo Jima"
};

void find_track(char *search_for) {
    for(int i = 0; i < 5; i++) {
        char *result = strstr(tracks[i], search_for);
        printf("Trach %i : '%s' - %s\n", i, tracks[i], search_for);
        if( result ) {
            printf("\nFind out : Trach %i : '%s'\n", i, tracks[i]);
        }
    }
}

void main() {
    char search_for[80];
    printf("Search for: ");
    fgets(search_for, 80, stdin);
    find_track(search_for);
}