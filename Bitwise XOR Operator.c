#include <stdio.h>

/**
 * Bitwise Operator
 * ^ - Bitwise XOR Operator 
 * performs OR Operation with the different;
 * when 1 or 1 is 0.
 * 
 * PSUEDO Code
 * b = 3 == 0011
 * a = 4 == 0100
 * XOR - a = 0111
 * a = 0111 == 7
 * 
 * a = 0111
 * b = 0011
 * XOR - b = 0100
 * b = 0100 == 4
 * 
 * a = 0111
 * b = 0100
 * XOR - a = 0011
 * b = 4
 * a = 3
 */
 
int main() {
    int a = 4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("After XOR, a = %d and b = %d", a, b);
    return 0;
}
