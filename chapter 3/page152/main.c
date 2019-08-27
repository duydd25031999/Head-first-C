#include <stdio.h>
#include <unistd.h>

int main(int argc, char * const argv[])
{
    char *delivery = "";
    int thick = 0;
    char ch;

    while ( (ch = getopt(argc, argv, "d:t")) != EOF )
    {
        switch (ch)
        {
        case 'd':
            delivery = optarg;
            break;
        case 't':
            thick = 1;
            break;
        default:
            fprintf(stderr, "Umknow option: '%s'\n", optarg);
            return 1;
        }

        argc += optind;
        argv += optind;

        if(thick) {
            puts("thick crust.");
        }

        if(delivery[0]) {
            printf("To be delivered %s.\n", delivery);
        }

        puts("Ingredients:");
        for(int i = 1; i < argc; i++) {
            puts(argv[i]);
        }
    }
    

    return 0;
}
