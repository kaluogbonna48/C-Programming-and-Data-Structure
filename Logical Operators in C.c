#include <stdio.h>

/**
 * Logical Operator
 * && - combines condition and 
 * returns true if the two are true
 * && - Will shortcircuit 
 * when it encounters false condition.
 * || - combines condition and 
 * returns true if any of the two is true. 
 * || - Will shortcircuit 
 * when it encounters true condition.
 */
 
int main() {
    int a = 4, b = 5;
    int incr;
    //OR Operator
    incr = (a > b) || (b++);
    printf("%d\n", incr);
    printf("%d\n", b);
    //AND Operator
    incr = (a > b) && (b++);
    printf("%d\n", incr);
    printf("%d\n", b);
    
    return 0;
}
