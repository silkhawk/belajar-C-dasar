#include <stdio.h>
int main()
{
    int A =10;
    A +=5;
    printf("penjumlahan dengan 5 %d \n",A);

    int B = 9;
    B %= 2;
    printf("sisa bagi %d \n", B);

    int C = 9;
    C /= 2;
    printf("hasil bagi %d \n", C);

    int D = 2;
    D &= 2;
    printf(" %d \n", D);
    return 0;
}

