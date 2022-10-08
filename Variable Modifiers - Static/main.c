// Online C compiler to run C program online
#include <stdio.h>
int increament();

int main() {
    // Write C code here
   int value;
   value = increament();
   value = increament();
   value = increament();
   value = increament();
   value = increament();
    printf("%d", value);

    return 0;
}
static int count;
int increament()
{
   //int count = 0; 
    count = count + 1;
    
    return count;
}
