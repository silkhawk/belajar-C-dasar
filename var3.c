#include <stdio.h>

int main(){
    int A = 5;
    int B = 10;

    printf(" A = %d \n",A);
    printf(" B = %d\n\n",B);
    //menukar isi var
    B = A;
    printf(" a = %d \n", B);
    printf(" b = %d", A);
    return 0;
}