#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[80];
    FILE *in = fopen("input.txt", "r");
    FILE *file1 = fopen("output1.txt", "w");
    FILE *file2 = fopen("output2.txt", "w");
    
    while (fscanf(in, "%79[^\n]\n", line) == 1)
    {
        if( strstr(line, "Duy") ) {
            fprintf(file1, "%s\n", line);
        } else {
            fprintf(file2, "%s\n", line);
        }
    }
    
    fclose(file1);
    fclose(file2);
    return 0;
}