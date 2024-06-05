#include <stdio.h>

int main()
{
    
    int angka = 379;
    printf("integer %d ", angka);
    printf("ukuran %d bytes \n ", sizeof(angka));

     float bilangan = 3.7;
     printf("float %f ", bilangan);
     printf("ukuran %d bytes \n", sizeof(bilangan));

     double A = 37.985;
     printf("double  %lf ", A);
     printf("ukuran  %lu bytes \n", sizeof(A));

     double D = 12E4;
     printf("pangkat  %.3lf ", D);
     printf("ukuran  %lu bytes \n", sizeof(D));

     /*
          double B = 12E4;
          printf("pangkat  %lf \n", B);

          double C = 37.985;
          printf("double  %.2lf \n", C);

          double D = 12E4;
          printf("pangkat  %.3lf \n", D); */

     return 0;
}