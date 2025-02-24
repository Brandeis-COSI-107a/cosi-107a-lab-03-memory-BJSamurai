#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Skip the program name and process each argument
    for (int i = 1; i < argc; i++) {
        // Convert string to long using strtol
        char *endptr;
        long address = strtol(argv[i], &endptr, 10);
        
        // Check for conversion errors
        if (*endptr != '\0') {
            fprintf(stderr, "Error: Invalid number '%s'\n", argv[i]);
            continue;
        }
        
        // Print the address with exactly 48 bits (12 hex digits) with 0x prefix
        // %012lX formats as hexadecimal with uppercase letters, 0-padded to 12 digits
        printf("0x%012lX\n", address & 0xFFFFFFFFFFFF);
    }
    
    return 0;
}
