#include <stdio.h>
#include "hellolib.h"

// The implementation of the function to be exported
void print_hello_world() {
    printf("Hello, world! From hellolib (DLL).");
}