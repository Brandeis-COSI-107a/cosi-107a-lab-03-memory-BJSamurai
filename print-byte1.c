#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        char *endptr;
        long num = strtol(argv[i], &endptr, 0);
        
        if (*endptr != '\0') {
            fprintf(stderr, "Error: Invalid number '%s'\n", argv[i]);
            continue;
        }
        
        unsigned char byte1 = (num >> 8) & 0xFF;
        
        printf("0x%02X %3d\n", byte1, byte1);
    }
    
    return 0;
}
