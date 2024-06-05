#include <stdio.h>

int main(){
    char text[] ="Soal-1"; //text adalah array
    int panj = 4;
    float leb = 6.5;
    double luas;
    luas = panj * leb;

    printf("%s \n",text);//untuk string
    printf("Panjang : %d\n",panj);
    printf("Lebar   : %f\n",leb);
    printf("Luas    : %lf\n",luas);//untuk double

    return 0;
}