#include <stdio.h>
/**
 * Do while loop 
 * It first performs the first loop, 
 * then check the condition.
 */


int main()
{
    unsigned int i = 500;
    
    do
    {
        printf("%d\n", i);
    } while (i-- != 0);
    return 0;
}
