#include <stdio.h>

/**
 * Bitwise Operator
 * & - Bitwise AND)- combines bits and 
 * returns the AND Logic Addition
 * | - (Bitwise OR) - combines bits and 
 * returns the OR Logic Addition 
 * ~ - (Bitwise NOT) - performs unary bits operation and 
 * returns the Oposite bit 
 */
 
int main() {
    int a = 7, b = 5;
    int incr;
    //OR Operator
    incr = a & b; 
    printf("%d\n", incr);
    incr = a | b; 
    printf("%d\n", incr);
    incr = ~ a; 
    printf("%i\n", incr);
    incr = ~ b; 
    printf("%i\n", incr);
      
    return 0;
}
