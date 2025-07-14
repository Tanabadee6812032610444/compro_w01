#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

void process_line(char *line) {
    // Process the line (e.g., parse it, modify it, etc.)
    printf("Processing line: %s", line);
}

int main(int argc, char *argv[]) {
    FILE *file;
    char line[MAX_LINE_LENGTH];

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        process_line(line);
    }

    fclose(file);
    return 0;
}