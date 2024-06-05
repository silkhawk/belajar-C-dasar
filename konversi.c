#include <stdio.h>

int main(){

    int A = 5;
    int B = 2;
    float  C = A/B;
 

    printf("%f \n",C);
    // Explicit conversion
    float D = (float)A / B;
    printf("%f", D);

    return 0;
}