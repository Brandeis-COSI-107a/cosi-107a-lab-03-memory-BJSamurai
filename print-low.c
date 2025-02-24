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
        
        unsigned char low_bits = num & 0xFF;
        
        printf("%d 0x%02X %3d\n", i, low_bits, low_bits);
    }
    
    return 0;
}
