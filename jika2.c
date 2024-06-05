#include <stdio.h>

int main(){
    int nilai =85;
    char angka;
    if(nilai>90){
        angka='A';
    }
    else if(nilai >80 && nilai < 90)
    {
        angka = 'B';
    }
    else if(nilai > 70 && nilai < 80)
    {
        angka = 'C';
    }else{
        angka = 'D';
    }

    printf("Nilai %c",angka);
}