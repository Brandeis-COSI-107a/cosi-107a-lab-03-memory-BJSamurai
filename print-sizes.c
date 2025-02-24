#include <stdio.h>
#include <stdint.h>

int main() {
    int myInt = 978;
    int *myIntPtr;
    char myCharArray[200];
    char *myCharPtr;
    
    printf("size of char is %zu\n", sizeof(char));
    printf("size of short is %zu\n", sizeof(short));
    printf("size of int is %zu\n", sizeof(int));
    printf("size of long is %zu\n", sizeof(long));
    printf("size of long long is %zu\n", sizeof(long long));
    printf("size of float is %zu\n", sizeof(float));
    printf("size of double is %zu\n", sizeof(double));
    printf("size of char * is %zu\n", sizeof(char *));
    printf("size of int * is %zu\n", sizeof(int *));
    printf("size of long * is %zu\n", sizeof(long *));
    
    printf("The size of my character array is %zu\n", sizeof(myCharArray));
    
    myCharPtr = myCharArray;
    
    printf("The size of my character pointer is %zu\n", sizeof(myCharPtr));
    
    myIntPtr = &myInt;
    
    printf("The size of my int pointer is %zu\n", sizeof(myIntPtr));
    
    printf("The size of what my integer pointer points at is %zu\n", sizeof(*myIntPtr));
    
    return 0;
}
