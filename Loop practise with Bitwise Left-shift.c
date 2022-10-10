/**
 * Loop practise with Bitwise Left-shift
 * When Bit is Left-shifted n times,
 * The current value is divided into 2**n (2 raised to power n)
 */

#include <stdio.h>

int main() {
    // Write C code here
    int i = 1024;
    int count = 1;
    for(; i; i <<= 1)
    {
        printf("Hello world \n");
        printf("Bitwise right-shift value = %d\n", i);
        printf("Count Value = %d\n", count++);
    }
    return 0;
}
