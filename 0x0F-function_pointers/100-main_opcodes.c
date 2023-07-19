#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }

    printf("%02x", ((unsigned char *)main)[0]);
    for (int i = 1; i < num_bytes; i++) {
        printf(" %02x", ((unsigned char *)main)[i]);
    }
    printf("\n");

    return 0;
}
