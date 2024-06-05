#include <stdio.h>

int main(){
    //int
    int angka = 379;
    printf("integer %d \n",angka);
    //float
    float bilangan = 3.7;
    printf("float %f \n",bilangan);
    //double
    double A = 37.985;
    printf("double  %lf \n",A);
    // scientific
    double B = 12E4;
    printf("pangkat  %lf \n", B);
    // digits
    double C = 37.985;
    printf("double  %.2lf \n", C);
    // scientific
    double D = 12E4;
    printf("pangkat  %.3lf \n", D);

    return 0;
}